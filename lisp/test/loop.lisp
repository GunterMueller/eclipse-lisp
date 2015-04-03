;;;   -*- Mode: LISP; Syntax: Common-lisp; Package: ANSI-LOOP; Base: 10; Lowercase:T -*-
;;;>
;;;> Portions of LOOP are Copyright (c) 1986 by the Massachusetts Institute of Technology.
;;;> All Rights Reserved.
;;;> 
;;;> Permission to use, copy, modify and distribute this software and its
;;;> documentation for any purpose and without fee is hereby granted,
;;;> provided that the M.I.T. copyright notice appear in all copies and that
;;;> both that copyright notice and this permission notice appear in
;;;> supporting documentation.  The names "M.I.T." and "Massachusetts
;;;> Institute of Technology" may not be used in advertising or publicity
;;;> pertaining to distribution of the software without specific, written
;;;> prior permission.  Notice must be given in supporting documentation that
;;;> copying distribution is by permission of M.I.T.  M.I.T. makes no
;;;> representations about the suitability of this software for any purpose.
;;;> It is provided "as is" without express or implied warranty.
;;;> 
;;;>      Massachusetts Institute of Technology
;;;>      77 Massachusetts Avenue
;;;>      Cambridge, Massachusetts  02139
;;;>      United States of America
;;;>      +1-617-253-1000
;;;>
;;;> Portions of LOOP are Copyright (c) 1989, 1990, 1991, 1992 by Symbolics, Inc.
;;;> All Rights Reserved.
;;;> 
;;;> Permission to use, copy, modify and distribute this software and its
;;;> documentation for any purpose and without fee is hereby granted,
;;;> provided that the Symbolics copyright notice appear in all copies and
;;;> that both that copyright notice and this permission notice appear in
;;;> supporting documentation.  The name "Symbolics" may not be used in
;;;> advertising or publicity pertaining to distribution of the software
;;;> without specific, written prior permission.  Notice must be given in
;;;> supporting documentation that copying distribution is by permission of
;;;> Symbolics.  Symbolics makes no representations about the suitability of
;;;> this software for any purpose.  It is provided "as is" without express
;;;> or implied warranty.
;;;> 
;;;> Symbolics, CLOE Runtime, and Minima are trademarks, and CLOE, Genera,
;;;> and Zetalisp are registered trademarks of Symbolics, Inc.
;;;>
;;;>      Symbolics, Inc.
;;;>      8 New England Executive Park, East
;;;>      Burlington, Massachusetts  01803
;;;>      United States of America
;;;>      +1-617-221-1000


(defmacro loop-test (short-desc lambda-list form &body params-and-answers)
  `(deftest ,short-desc
     (flet ((test ,lambda-list ,form))
       (declare (notinline test))
       (values ,@(mapcar #'(lambda (pair)
			     `(test ,@(mapcar #'(lambda (arg)
						  `',arg)
					      (car pair))))
			 params-and-answers)))
     ,@(mapcar #'second params-and-answers)))



(loop-test "from/=/collect"
      ()
      (loop for x from 1 to 10
	    for y = nil then x
	    collect (list x y))
  (() ((1 nil) (2 2) (3 3) (4 4) (5 5) (6 6) (7 7) (8 8) (9 9) (10 10))))

(loop-test "from/=/colllect/variable"
      (lo hi)
      (loop for x from lo to hi
	    for y = nil then x
	    collect (list x y))
  ((1 10) ((1 nil) (2 2) (3 3) (4 4) (5 5) (6 6) (7 7) (8 8) (9 9) (10 10))))

(loop-test "exercise loop-body flagvar"
      (lo hi)
      (loop for x from lo to hi
	    ;; test flagvar stuff in loop-body
	    as z = (list x x x x x x x x x x x x x x x x x x x x x x x x x)
	    for y = nil then x
	    collect (list x y)
	    do (unless (equal z (list x x x x x x x x x x x x x x x x x x x x x x x x x))
		 (error "oops")))
  ((1 10) ((1 nil) (2 2) (3 3) (4 4) (5 5) (6 6) (7 7) (8 8) (9 9) (10 10))))

(loop-test "add fixnum dcl"
      (lo hi)
      (loop for x of-type fixnum from lo to hi
	    for y = nil then x
	    collect (list x y))
  ((1 10) ((1 nil) (2 2) (3 3) (4 4) (5 5) (6 6) (7 7) (8 8) (9 9) (10 10))))

(loop-test "add fixnum keyword"
      (lo hi)
      (loop for x fixnum from lo to hi
	    for y = nil then x
	    collect (list x y))
  ((1 10) ((1 nil) (2 2) (3 3) (4 4) (5 5) (6 6) (7 7) (8 8) (9 9) (10 10))))

(loop-test "simple parallel constant arguments"
      ()
      (loop for x from 1 to 10 and y = nil then x
	    collect (list x y))
  (() ((1 nil) (2 1) (3 2) (4 3) (5 4) (6 5) (7 6) (8 7) (9 8) (10 9))))

(loop-test "simple parallel variable arguments"
      (lo hi)
      (loop for x from lo to hi and y = nil then x
	    collect (list x y))
  ((1 10) ((1 nil) (2 1) (3 2) (4 3) (5 4) (6 5) (7 6) (8 7) (9 8) (10 9))))

(loop-test "AS constant args"
      ()
      (loop as i from 1 to 3
	    collect i)
  (() (1 2 3)))

(loop-test "AS variable args"
      (lo hi)
      (loop as i from lo to hi
	    collect i)
  ((1 3) (1 2 3)))

(loop-test "step downto constant args"
      ()
      (loop for i from 10 downto 1 by 3
	    collect i)
  (() (10 7 4 1)))

(loop-test "step downto variable args constant step"
      (hi lo)
      (loop for i from hi downto lo by 3
	    collect i)
  ((10 1) (10 7 4 1)))

(loop-test "step downto variable args"
      (hi lo step)
      (loop for i from hi downto lo by step
	    collect i)
  ((10 1 3) (10 7 4 1))
  ((10 2 3) (10 7 4))
  ((10 3 3) (10 7 4))
  ((10 4 3) (10 7 4))
  ((10 5 3) (10 7))
  )

(loop-test "step above variable args"
      (hi lo step)
      (loop for i from hi above lo by step
	    collect i)
  ((10 1 3) (10 7 4))
  ((10 2 3) (10 7 4))
  ((10 3 3) (10 7 4))
  ((10 4 3) (10 7))
  )

(loop-test "AS BELOW constant limit"
      ()
      (loop as i below 3
	    collect i)
  (() (0 1 2)))

(loop-test "AS BELOW variable limit"
      (limit)
      (loop as i below limit
	    collect i)
  ((3) (0 1 2)))


(loop-test "IN constant list"
      ()
      (loop for item in '(1 2 3)
	    collect item)
  (() (1 2 3)))

(loop-test "IN variable list"
      (l)
      (loop for item in l collect item)
  ((nil) nil)
  (((foo)) (foo)))

(loop-test "IN constant list with step"
      ()
      (loop for item in '(1 2 3 4 5) by #'cddr
	    collect item)
  (() (1 3 5)))

(loop-test "IN different constant list with step"
      ()
      (loop for item in '(1 2 3 4) by #'cddr
	    collect item)
  (() (1 3)))

(loop-test "IN variable list with step"
      (l)
      (loop for item in l by #'cddr
	    collect item)
  (((1 2 3 4 5)) (1 3 5))
  (((1 2 3 4)) (1 3)))

(loop-test "IN destructured typedeclared constant list"
      ()
      (loop for (item . x) (t . fixnum) in '((a . 1) (b . 2) (c . 3))
	    unless (eq item 'b) sum x)
  (() 4))

(loop-test "IN destructured type-declared variable list"
      (l)
      (loop for (item . x) (t . fixnum) in l
	    unless (eq item 'b) sum x)
  ((((a . 1) (b . 2) (c . 3))) 4))

(loop-test "ON constant list"
      ()
      (loop for sublist on '(a b c d)
	    collect sublist)
  (() ((a b c d) (b c d) (c d) (d))))

(loop-test "ON variable list"
      (l)
      (loop for sublist on l
	    collect sublist)
  (((a b c d)) ((a b c d) (b c d) (c d) (d))))

(loop-test "ON destructured"
      (l)
      (loop for (item) on l
	    collect item)
  (((a b c d)) (a b c d)))


(loop-test "ON destructured (item) with step"
      (l)
      (loop for (item) on l by #'cddr
	    collect item)
  (((a b c d)) (a c)))

(loop-test "ON destructured (x y) with step"
      (l)
      (loop for (x y) on l by #'cddr
	    collect (cons x y))
  (((a b c d)) ((a . b) (c . d))))

(loop-test "ON destructured (x y . z) with step"
      (l)
      (loop for (x y . z) on l by #'cddr
	    collect (list x y z))
  (((a b c d)) ((a b (c d)) (c d nil))))


(loop-test "miscellaneous sequential iteration"
      ()
      (loop for item = 1 then (+ item 10)
	    for iteration from 1 to 5
	    collect item)
  (() (1 11 21 31 41)))

(loop-test "ACROSS constant arg"
      ()
      (loop for char across "foobar" collect char)
  (() (#\f #\o #\o #\b #\a #\r)))

(loop-test "ACROSS declared variable arg"
      (s)
      (loop for char of-type base-char across (the simple-base-string s) collect char)
  (("foobar") (#\f #\o #\o #\b #\a #\r)))


(loop-test "REPEAT sequencing, constant arg"
      (l)
      (loop repeat 3
	    for x in l
	    collect x)
  ((nil) nil)
  (((1)) (1))
  (((1 2)) (1 2))
  (((1 2 3)) (1 2 3))
  (((1 2 3 4)) (1 2 3)))

(loop-test "REPEAT sequencing 2, constant arg"
      (l)
      (loop for x in l
	    repeat 3
	    collect x)
  ((nil) nil)
  (((1)) (1))
  (((1 2)) (1 2))
  (((1 2 3)) (1 2 3))
  (((1 2 3 4)) (1 2 3)))

(loop-test "REPEAT sequencing, variable arg"
      (n l)
      (loop repeat n
	    for x in l
	    collect x)
  ((3 nil) nil)
  ((3 (1)) (1))
  ((3 (1 2)) (1 2))
  ((3 (1 2 3)) (1 2 3))
  ((3 (1 2 3 4)) (1 2 3)))

(loop-test "REPEAT sequencing 2, variable arg"
      (n l)
      (loop for x in l
	    repeat n
	    collect x)
  ((3 nil) nil)
  ((3 (1)) (1))
  ((3 (1 2)) (1 2))
  ((3 (1 2 3)) (1 2 3))
  ((3 (1 2 3 4)) (1 2 3)))

(loop-test "WHILE sequencing"
      (stack)
      (loop while stack
	    for item = (length stack) then (pop stack)
	    collect item)
  (((a b c d e f)) (6 a b c d e f))
  (((a)) (1 a))
  ((()) ()))

(loop-test "WHILE sequencing 2"
      ()
      (loop for i fixnum from 3
	    when (oddp i) collect i
	    while (< i 5))
  (() (3 5)))

(loop-test "simple always"
      (n)
      (loop for i from 0 to n
	    always (< i 11))
  ((10) t)
  ((11) nil))

(loop-test "always runs epilogue"
      (n)
      (loop for i from 0 to n
	    always (< i 3)
	    finally (return 'overriding-value))
  ((5) nil)
  ((2) overriding-value))

(loop-test "simple never"
      (n)
      (loop for i from n to (+ n 3)
	    never (> i 11))
  ((8) t)
  ((9) nil))

(loop-test "never runs epilogue"
      (n)
      (loop for i from n to (+ n 3)
	    never (< i 3)
	    finally (return 'overriding-value))
  ((0) nil)
  ((3) overriding-value))

(defun oddsq (x)
  (cond ((not (numberp x)) (error "not a number"))
	((oddp x) (* x x))
	(t nil)))

(loop-test "simple thereis"
      (l)
      (loop for x in l
	    thereis (oddsq x))
  (((1 2 3)) 1)
  (((2 4 6)) nil)
  (((2 4 6 7)) 49))

(loop-test "thereis runs epilogue"
      (l)
      (loop for x in l
	    thereis (oddsq x)
	    finally (return 'overriding-value))
  (((2 3 4)) 9)
  (((2 4 6)) overriding-value))

(loop-test "loop-finish"
      ()
      (loop for i in '(1 2 3 stop-here 4 5 6)
	    when (symbolp i) do (loop-finish)
	    count i)
  (() 3))

(loop-test "count"
      ()
      (loop for i in '(1 2 3 stop-here 4 5 6)
	    until (symbolp i)
	    count i)
  (() 3))


(loop-test "multiple collection"
      (l)
      (loop for x in l
	    collect x
	    collecting x
	    nconc (list x)
	    nconcing (list x)
	    append (list x)
	    appending (list x))
  (((a b)) (a a a a a a b b b b b b)))

(loop-test "nconc 1"
      (l)
      (loop for x in l
	    nconc (copy-list x))
  ((((a) (b c) () (d e))) (a b c d e)))

(loop-test "more multiple collection"
      ()
      (loop for name in '(fred sue alice joe june)
	    for kids in '((bob ken) () () (kris sunshine) ())
	    collect name
	    append kids)
  (() (fred bob ken sue alice joe kris sunshine june)))


(loop-test "multiple collection with INTO"
      ()
      (loop for name in '(fred sue alice joe june)
	    as age in '(22 26 19 20 10)
	    append (list name age) into name-and-age-list
	    counting name into name-count
	    sum age into total-age
	    finally (return (values (round total-age name-count)
				    name-and-age-list)))
  (() 19 (fred 22 sue 26 alice 19 joe 20 june 10)))

(loop-test "gratuitous multiple collection"
      ()
      (loop for i in '(bird 3 4 turtle (1 . 4) horse cat)
	    when (symbolp i) collect i)
  (() (bird turtle horse cat)))

(loop-test "collection sequencing"
      ()
      (loop for i from 1 to 10
	    if (oddp i) collect i)
  (() (1 3 5 7 9)))

(loop-test "more collecting into"
      ()
      (loop for i in '(a b c d) by #'cddr
	    collect i into my-list
	    finally (return (values 'foo my-list 'bar)))
  (() foo (a c) bar))


(loop-test "append 1"
      ()
      (loop for x in '((a) (b) ((c)))
	    append x)
  (() (a b (c))))

(loop-test "nconc 2"
      ()
      (loop for i upfrom 0
	    as x in '(a b (c))
	    nconc (if (evenp i) (list x) nil))
  (() (a (c))))

(loop-test "count simple variable arg"
      ()
      (loop for i in '(a b nil c nil d e)
	    count i)
  (() 5))


(loop-test "simple sum"
      ()
      (loop for i fixnum in '(1 2 3 4 5)
	    sum i)
  (() 15))

(loop-test "sum fixnum keyword"
      ()
      (loop for i fixnum in '(1 2 3 4 5)
	    sum i fixnum)
  (() 15))

(loop-test "sum fixnum declaration"
      ()
      (loop for i fixnum in '(1 2 3 4 5)
	    summing i of-type fixnum)
  (() 15))

#|| Too dangerous with floating point equality.
(loop-test "sum floating point series"
      (series)
      (loop for v in series
	    sum (* 2.0 v))
  (((1.2 4.3 5.7)) 22.4))
||#

(loop-test "simple maximize"
      ()
      (loop for i in '(2 1 5 3 4)
	    maximize i)
  (() 5))

(loop-test "simple minimize"
      ()
      (loop for i in '(2 1 5 3 4)
	    minimize i)
  (() 1))

(loop-test "maximize fixnum keyword"
      (series)
      (loop for v in series
	    maximizing (round v) fixnum)
  (((1.2 4.3 5.7)) 6))

(loop-test "minimize into fixnum keyword"
      (series)
      (loop for v float in series
	    minimizing (round v) into result fixnum
	    finally (return result))
  (((1.2 4.3 5.7)) 1))

(loop-test "mimimize declared fixnum"
      (series)
      (loop for v single-float in series
	    minimizing (round v) of-type fixnum)
  (((1.2f0 4.3f0 5.7f0)) 1))


(loop-test "sequential with"
      ()
      (loop with a = 1
	    with b = (+ a 2)
	    with c = (+ b 3)
	    return (list a b c))
  (() (1 3 6)))


(loop-test "parallel with"
      ()
      (loop with a = 1 and b = 2 and c = 3
	    return (list a b c))
  (() (1 2 3)))



(loop-test "parallel with 2"
      (a b)
      (loop with a = 1 and b = (+ a 2) and c = (+ b 3)
	    return (list a b c))
  ((5 10) (1 7 13)))

(loop-test "destructuring type-keyworded with"
      ()
      (loop with (a b c d e f) (float integer short-float single-float double-float long-float)
	    return (list a b c d e f))
  (() (0.f0 0 0.0s0 0.0f0 0.0d0 0.0l0)))

(loop-test "single-type-keyword destructured WITH"
      ()
      (loop with (a b c) float
	    return (list a b c))
  (() (0.f0 0.f0 0.f0)))


(loop-test "hairy conditional nesting"
      ()
      (loop with gubbish
	    for i in '(1 2 3 4 5 6)
	    when (oddp i)
	      do (push i gubbish)
	      and collect i into odd-numbers
	      and do (push i gubbish)
	    else
	      collect i into even-numbers
	    finally (return (values odd-numbers even-numbers gubbish)))
  (() (1 3 5) (2 4 6) (5 5 3 3 1 1)))

(loop-test "collecting IT"
      ()
      (loop for i in '(1 2 3 4 5 6)
	    when (and (> i 3) i)
	    collect it)
  (() (4 5 6)))

(loop-test "returning IT"
      ()
      (loop for i in '(1 2 3 4 5 6)
	    when (and (> i 3) i)
	    return it)
  (() 4))

(loop-test "THEREIS 3"
      ()
      (loop for i in '(1 2 3 4 5 6)
	    thereis (and (> i 3) i))
  (() 4))


(loop-test "another multiple collection hairy conditional structure"
      ()
      (loop for i in `(,(1+ most-positive-fixnum) 1 2 buckle-my-shoe 3 4 shut-the-door (foo))
	    when (numberp i)
	      when (typep i 'bignum)
	        collect i into big-numbers
	      else
	        collect i into other-numbers
	    else
	      when (symbolp i)
	        collect i into symbol-list
	      else collect i into other-list
	    finally (return (list big-numbers other-numbers symbol-list other-list)))
  (() ((#.(1+ most-positive-fixnum)) (1 2 3 4) (buckle-my-shoe shut-the-door) ((foo)))))

(loop-test "more conditional structure"
      ()
      (with-output-to-string (s)
	(loop for x from 0 to 3
	      do (format s ":~d " x)
	      if (zerop (mod x 2))
	        do (princ " a" s)
		and if (zerop (floor x 2))
		     do (princ " b" s)
		     end
		and do (princ " c" s)))
  (() ":0  a b c:1 :2  a c:3 "))


(loop-test "more type-declared destructuring"
      ()
      (loop for (a b c) (integer integer float) in '((1 2 4.0) (5 6 8.3) (8 9 10.4))
	    collect (list c b a))
  (() ((4.0 2 1) (8.3 6 5) (10.4 9 8))))

(loop-test "even more type-declared destructuring"
      ()
      (loop for (a b c) float in '((1.0 2.0 4.0) (5.0 6.0 8.3) (8.0 9.0 10.4))
	    collect (list c b a))
  (() ((4.0 2.0 1.0) (8.3 6.0 5.0) (10.4 9.0 8.0))))


(loop-test "hash-keys"
      ()
      (let ((ht (make-hash-table :test #'equal)))
	(loop for i from 0 below 10
	      do (loop for j from 0 below 10
		       do (setf (gethash (cons i j) ht) (cons (+ i j) (* i j)))))
	(loop for (i . j) of-type (fixnum . fixnum) being the hash-keys of ht using (hash-value pair)
	      as (sum . product) of-type fixnum = pair
	      always (and (= (+ i j) sum) (= (* i j) product))
	      count t into count
	      finally (return (= count 100))))
  (() t))
