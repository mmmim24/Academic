list = []

def newtonRhapson(func, deriv_func, x0, err_tol):

  def f(x):
    return eval(func)

  def df(x):
    return eval(deriv_func)

  iteration = 0

  while iteration == 0 or abs_err > err_tol :

    x1 = x0 - (f(x0) / df(x0))
    
    abs_err = (abs(x1 - x0) / x1) * 100

    list.append([])
    list[iteration].append([iteration+1, round(x0,5), round(x1,5), round(f(x1),10), round(abs_err,4)])
    
    iteration += 1
    x0 = x1

newtonRhapson('x**3 - 0.165*(x**2) + 0.00039933', '3*(x**2) - 0.33*x', 0.05, 0.05)
print("{:<20} {:<20} {:<20} {:<20} {:<20}".format('Iteration', 'x(i-1)', 'xi','f(xi)', 'Error Percentage(%)'))
print()

for i in list :
  for j in i :
    for k in j :
      print('{:<20}'.format(str(k)), end = ' ')
    print()