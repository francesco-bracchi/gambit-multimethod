(namespace 
 ("multimethod#" 
  *-multi-*
  method-set! 
  multi 
  define-multi 
  define-method
  
  type
  types))

;; ## define-multi
;; defines a new multimethod, and optionally a default implementation.
;; name-formals is in the form (<name> . <arguments>).
;; it supports variadic arguments via . notation, like
;; `(define-multi (+ a b . as) ...)` but not gambit specific #!optional
;; or #!keys arguments.
;; ### dispatcher
;; dispatcher is a variadic function that takes in input the arguments 
;; passed to the method,  and returns a value used to select the used method.
(define-macro (define-multi name-formals dispatcher . rest)
  (let ((name (car name-formals))
	(formals (cdr name-formals)))
    (if (null? rest)
	`(define ,name (multi ,dispatcher))
	`(define ,name (multi ,dispatcher (lambda ,formals ,@rest))))))

;; ## define-method
;; define a new method. `name-formals` is the same of define-multi,
;; value is the value tested for equality against the result of the
;; dispatcher method.
(define-macro (define-method name-formals value . rest)
  (let ((name (car name-formals))
	(formals (cdr name-formals)))
    `(method-set! ,name ,value (lambda ,formals ,@rest))))
