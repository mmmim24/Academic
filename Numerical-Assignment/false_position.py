list = []

def falsePosition(func, lb, ub, err_tol):

  def f(x):
    return eval(func)

  iteration = 0

  while iteration < 2 or abs_err > err_tol :

    mid_new = (ub*f(lb) - lb*f(ub)) / (f(lb) - f(ub))
    
    if iteration > 0 : 
      abs_err = (abs(mid_new - mid_old) / mid_new) * 100

    list.append([])
    if iteration > 0 :
      list[iteration].append([iteration+1, round(lb,5), round(ub,5), round(mid_new,5), round(abs_err,5), round(f(mid_new),10)])
    else :
      list[iteration].append([iteration+1, round(lb,5), round(ub,5), round(mid_new,5), '---', round(f(mid_new),10)])
    
    iteration += 1
    mid_old = mid_new
    
    if f(lb) * f(mid_new) < 0 :
      ub = mid_new
    else :
      lb = mid_new


falsePosition('x**3 - 0.165*(x**2) + 0.00039933', 0, 0.11, 0.05)
print("{:<20} {:<20} {:<20} {:<20} {:<20} {:<20}".format("\033[1m"+'Iteration','Lower Bound','Upper Bound','Mid Value', 'Error Percentage', 'f(Mid Value)'+"\033[0m"))
print()

for i in list :
  for j in i :
    for k in j :
      print('{:<20}'.format(str(k)), end = ' ')
    print()