(namespace ("multimethod.test#"))
(##include "~~/lib/gambit#.scm")
(include "~~multimethod/multimethod#.scm")

(namespace ("multimethod.test#" + - * /))

(define-multi (to-string obj) type
  (with-output-to-string "" (lambda () (write obj))))

(define-type pos x y)

(define pos (##structure-type (make-pos 0 0)))

(define-method (to-string p) pos
  (string-append 
   "{" 
   "\"x\":" (to-string (pos-x p)) ", "
   "\"y\":" (to-string (pos-y p))
   "}"))

(define-method (to-string n) 'integer 
	(string-append "number:" (number->string n)))

(display "(to-string 102): ")
(write (to-string 102)) (newline)

(display "(to-string 102.1): ")
(write (to-string 102.1)) (newline)

(display "(to-string (make-pos 10 20)): ")
(write (to-string (make-pos 10 20))) (newline)
  
(display "(to-string \"pippo\"): ")
(write (to-string "pippo")) (newline)

(define (types-or-num . arguments)
  (map (lambda (type) 
	 (if (member type '(integer real rational complex)) 
	     'number 
	     type))
       (map type arguments)))

(define-multi (+ a b . as) types-or-num
  (apply + (cons (+ a b) as)))

(define-method (+ a b) '(number number)
  (##+ a b))

(define-method (+ a b) '(string string) 
  (string-append a b))

(define-method (+ a b) '(string char)
  (string-append a (string b)))

(define-method (+ a b) '(char string)
  (string-append (string a) b))

(define-method (+ a b) '(string number)
  (string-append a (number->string b)))

(define-method (+ a b) '(number string)
  (string-append (number->string a) b))

(define-method (+ a b) (list pos pos)
  (make-pos (+ (pos-x a) (pos-x b))
	    (+ (pos-y a) (pos-y b))))

(display "(+ 10 20 30 \" foo \" #\\b #\\a #\\r): ")
(pp (+ 10 20 30 " foo " #\b #\a #\r))

(display "(+ (make-pos 10 20) (make-pos 30 40) (make-pos -10 -20))")
(pp (+ (make-pos 10 20) (make-pos 30 40) (make-pos -10 -20)))

(define-multi (foo a b) types 
  '(do not know))

(define-method (foo a b) '(integer integer)
  '(integer and integer))

(define-method (foo a b) '(integer string)
  '(integer and string))

(display "(foo 10 'symbol): ")
(write (foo 10 'symbol)) (newline)

(display "(foo 10 20): ")
(write (foo 10 20)) (newline)

(display "(foo 10 \"bar\"): ")
(write (foo 10 "bar")) (newline)
  
