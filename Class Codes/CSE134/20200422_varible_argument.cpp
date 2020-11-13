#include <stdio.h>
#include <stdarg.h>

int sum(int num,...) {

   va_list valist;
   int sum = 0.0;
   int i;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }

   /* clean memory reserved for valist */
   va_end(valist);

   return sum;
}

int main() {
   printf("Sum of 2, 3, 4, 5 = %d\n", sum(4, 2,3,4,5));
   printf("Sum of 5, 10, 15 = %d\n", sum(3, 5,10,15));
}
/**
Sum of 2, 3, 4, 5 = 14
Sum of 5, 10, 15 = 30
*/
