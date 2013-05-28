(namespace 
 ("multimethod#" 
  *-multi-*
  method-set! 
  multi 
  define-multi 
  define-method
  
  type
  types))

(define-macro (define-multi name-formals dispatcher . rest)
  (let ((name (car name-formals))
	(formals (cdr name-formals)))
    (if (null? rest)
	`(define ,name (multi ,dispatcher))
	`(define ,name (multi ,dispatcher (lambda ,formals ,@rest))))))

(define-macro (define-method name-formals value . rest)
  (let ((name (car name-formals))
	(formals (cdr name-formals)))
    `(method-set! ,name ,value (lambda ,formals ,@rest))))

#;(begin (define-multi (=? a b) types)
       (define-multi (=? a b) types
	 (eq? a b))
       (define-method (=? a b) '(string string) 
	 (string=? a b)))
