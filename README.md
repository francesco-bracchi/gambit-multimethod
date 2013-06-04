# Multimethods for Gambit-C

This is a simple test for multimethods in clojure sauce.

## Install

    > make;
    > sudo make install;
	
this will be enough

## Use

    (load "~~multimethod/multimethod")
	(include "~~multimethod/multimethod#.scm")
	
now in the environment there are 2 new macros and a couple of useful functions

### define-multi
    
	(define-multi (<name> <args> ...) <dispatcher>
	 <body> ...)
	  
This form introduces a new multifunction named `<name>`. 
`<dispatcher>` is the function to which are passed arguments, and the 
function that is actually invoked is the one that is associated with the
result of the dispatcher operation.
the `<body> ...` is optional and is the action invoked
when no methods are defined for the dispatched value.

#### Example:

    (define-multi (to-string obj) type
		(with-output-to-string "" (lambda () (write obj))))
		
This form creates a to-string function. by default outputs a string of the
external representation of the input. The dispatch function is `type` that 
is a function provided by multimethod that returns the type of an object.
i.e. `(type 10)` outputs `'number`. 

### define-method

This form adds an association between a value (the one returned by the dispatcher)
and a function.

    (define-method (<name> <args> ...) <value>
	  <body> ...)
	
#### Example

    (define-method (to-string n) 'integer
	  (string-append "number:" (number->string n)))
	
	(to-string 102) -> "number:102"
	(to-string 102.1) -> "102.1"
	
### Others

#### multi

    (define to-string (multi type (lambda (obj) (with-output-to-string "" (lambda () (write obj))))))
	
this is the same of 
	
    (define-multi (to-string obj) type
		(with-output-to-string "" (lambda () (write obj))))
		
		
#### type

this utility function returns the type of the first argument, useful for dispatching on
the first argument type


#### types

Another utility function to be used in dispatcher that returns the list of types of the 
arguments.


