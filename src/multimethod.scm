(namespace ("multimethod#"))
(##include "~~/lib/gambit#.scm")

;; hash table used to map multimethods (the value)
;; to a function for manipulating map from values to the actual functions
(define *-multi-* (make-table weak-keys: #t))

;; add a variant to the method whose key is multi 
(define (method-set! multi key value)
  ((table-ref *-multi-* multi) key value))

;; ## multimethod exception type
;; raised when the default method is not defined
(define-type multimethod-exception method arguments)

;; ## create a multimethod
;; this function creates a new multimethod. 
;; arguments:
;; + **dispatcher**: the function to which arguments are passed to have an aggregated value used 
;;   to select the right actual method
(define (multi dispatcher #!optional (default #f))
  (let* ((store (make-table))
	 (multi (lambda args (apply (table-ref store (apply dispatcher args) default) args))))
    (if (not default) (set! default (lambda args (raise (make-multimethod-exception multi args)))))
    (table-set! *-multi-* multi (lambda (key value) (table-set! store key value)))
    multi))

;; type is an utility function that returns the type of the first argument as a symbol.
;; i.e.
;;     (type 10)
;;     ;; => 'integer
;; 
;;     (type "foo bar")
;;     ;; => 'string
;; 
;; used in conjunction with multi creates a multimethod that dispatch according to the 
;; type of the first element
(define (type value . ignore)
  (cond
    ((##structure? value) (##structure-type value))
    ((pair? value) 'pair)
    ((vector? value) 'vector)
    ((table? value) 'table)
    ((symbol? value) 'symbol)
    ((string? value) 'string)
    ((char? value) 'char)
    ((integer? value) 'integer)
    ((rational? value) 'rational)
    ((real? value) 'real)
    ((complex? value) 'complex)
    ((boolean? value) 'boolean)
    ((null? value) 'null)
    ((eof-object? value) 'eof-object)
    ((eq? value #!void) 'void)
    (else 'unknown)))

;; that returns the list of all types of all arguments
(define (types . as) (map type as))
