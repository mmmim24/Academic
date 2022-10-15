from sympy import *
import sys

print('Enter Your option to find root of a equation')
print('1. Bisection')
print('2. False Position ')
print('3. Newton Rhapson')
print('4. Secant')

x = int(input())
if(x==1):
    print('\n\n*** BISECTION METHOD ***')
    def f(x):
        return eval(func)
    def bisection(func,max_it,lower,upper,tol):
        step = 1
        condition = True
        abs_err=0;
        while step <3 or abs_err> tol :
            mid_new = (lower + upper)/2
            if step>1:
                abs_err=(abs(mid_new-mid_old) / mid_new) * 100;
            print('Iteration-%d,lower= %0.10f,upper= %0.10f mid_new = %0.10f, abs_err = %0.10f and f(mid_new) = %0.10f' % (step,lower,upper, mid_new,abs_err, f(mid_new)))
            if f(lower) * f(mid_new) < 0:
                upper = mid_new
            else:
                lower = mid_new 
            mid_old=mid_new
            step = step + 1
        print('\nRequired Root is : %0.8f' % mid_new)
    func = input('Enter an expression in x: ')
    lower = input('First Guess: ')
    upper = input('Second Guess: ')
    e = input('Tolerable Error: ')
    max_it=input('Maximum iteration: ')
    lower = float(lower)
    upper = float(upper)
    e = float(e)
    max_it=float(max_it)
    if f(lower) * f(upper) > 0.0:
        print('Given guess values do not bracket the root.')
        print('Try Again with different guess values.')
    else:
        bisection(func,max_it,lower,upper,e)
    


elif(x==2):
    print('\n\n*** False-Position Method ***')
    def f(x):
            return eval(func)
    def false_pos(func,max_it,lower,upper,tol):
        step = 1
        condition = True
        abs_err=0;
        while step <3 or abs_err> tol :
            mid_new = ((upper*f(lower))-(lower*f(upper)))/(f(lower)-f(upper))
            print('\n')
            print(round(f(lower),6))
            print('\n')
            print(round(f(upper),6))
            print('\n')
            if step>1:
                abs_err=(abs(mid_new-mid_old) / mid_new) * 100;
            print('Iteration-%d,lower= %0.10f,upper= %0.10f mid_new = %0.10f, abs_err = %0.10f and f(mid_new) = %0.10f' % (step,lower,upper, mid_new,abs_err, f(mid_new)))
            if f(lower) * f(mid_new) < 0:
                upper = mid_new
            else:
                lower = mid_new 
            mid_old=mid_new
            step = step + 1
        print('\nRequired Root is : %0.8f' % mid_new)
    func = input('Enter an expression in x: ')
    lower = input('First Guess: ')
    upper = input('Second Guess: ')
    e = input('Tolerable Error: ')
    max_it=input('Maximum iteration: ')
    lower = float(lower)
    upper = float(upper)
    e = float(e)
    max_it=float(max_it)
    if f(lower) * f(upper) > 0.0:
        print('Given guess values do not bracket the root.')
        print('Try Again with different guess values.')
    else:
        false_pos(func,max_it,lower,upper,e)


elif(x==3):
    print('\n\n*** Newton Raphson Method ***')
    def NewtonRaphson(func,guess,tol):
        def f(x):
            return eval(func)
        def f2(der_func,x,val):
            return der_func.subs(x,val).evalf()
        step = 1
        abs_err=0
        while step <3 or abs_err> tol :
            x=Symbol('x')
            der_func=diff(func,x)
            der=f2(der_func,x,guess)
            if der==0:
                print('This attempt failed. Try again with a new guess.')
                break
            else:
                h=f(guess)/der
            new=guess-h
            abs_err=abs((new-guess)/new)*100
            print('Iteration-%d,new_guess = %0.10f, abs_err = %0.10f and f(new_guess) = %0.10f' % (step,new,abs_err, f(new)))
            step=step+1
            guess=new
        print('\nRequired Root is : %0.8f' % new)
    func = input('Enter an expression in x: ')
    tol = input('Tolerable Error: ')
    guess = input('Your Guess: ')
    tol=float(tol)
    guess=float(guess)
    NewtonRaphson(func, guess, tol)

elif(x==4):
    print('\n\n*** Secant Method ***')
    def f(x):
            return eval(func)
    def secant(func,max_it,in1,in2,tol):
        step = 1
        abs_err=0
        while step <3 or abs_err> tol :
            div=(f(in2)-f(in1))
            if div==0:
                print('This attempt has failed. Try again with new values.')
            else:
                new=in2-(f(in2)*(in2-in1))/div
            if step>1:
                abs_err=(abs(new-old) / new) * 100;
            print('Iteration-%d, X{}= %0.10f,X{}= %0.10f new = %0.10f, abs_err = %0.10f and f(new) = %0.10f'.format('i'),('i-1') % (step,in2,in1, new,abs_err, f(new)))
            in1=in2;
            in2=new;
            old=new
            step = step + 1
        print('\nRequired Root is : %0.8f' % new)
    func = input('Enter an expression in x: ')
    print('Enter two initial guesses. Make sure first guess is greater than the second guess. Press enter to continue')
    lower = input('First Guess:  ')
    upper = input('Second Guess: ')
    e = input('eerable Error: ')
    max_it=input('Maximum iteration: ')
    upper = float(upper)
    lower = float(lower)
    e = float(e)
    max_it=float(max_it)

    secant(func,max_it,upper,lower,e)