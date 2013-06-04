(namespace ("multimethod#"))
(##include "~~/lib/gambit#.scm")

(define *-multi-* (make-table weak-keys: #t))

(define (method-set! multi key value)
  ((table-ref *-multi-* multi) key value))

(define-type multimethod-exception method arguments)

(define (multi dispatcher #!optional (default #f))
  (let* ((store (make-table))
	 (multi (lambda args (apply (table-ref store (apply dispatcher args) default) args))))
    (if (not default) (set! default (lambda args (raise (make-multimethod-exception multi args)))))
    (table-set! *-multi-* multi (lambda (key value) (table-set! store key value)))
    multi))
  
(define (type value)
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

(define (types as) (map type as))
