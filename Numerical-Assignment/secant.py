list = []

def secant(func, x0, x1, err_tol):

  def f(x):
    return eval(func)

  iteration = 0

  while iteration == 0 or abs_err > err_tol :

    x2 = x1 - ((f(x1) * (x1 - x0)) / (f(x1) - f(x0)))
    
    abs_err = (abs(x2 - x1) / x2) * 100

    list.append([])
    list[iteration].append([iteration+1, round(x0,5), round(x1,5), round(x2,5), round(f(x2),10), round(abs_err,4)])
    
    iteration += 1
    x0 = x1
    x1 = x2

secant('x**3 - 0.165*(x**2) + 0.00039933', 0.02, 0.05, 0.05)
print("{:<20} {:<20} {:<20} {:<20} {:<20} {:<20}".format('Iteration', 'x(i-2)', 'x(i-1)', 'xi','f(xi)', 'Error Percentage(%)'))
print()

for i in list :
  for j in i :
    for k in j :
      print('{:<20}'.format(str(k)), end = ' ')
    print()