#include<stdio.h>
int main()
{

	long int T,a,b,c;
	int i;
	while(~scanf("%ld",&T))
		{
			for(i=1;i<=T&&T<20;i++)
 			{
				scanf("%ld%ld%ld",&a,&b,&c);
 				if((a+b)<=c || (b+c)<=a || (c+a)<=b)
 					printf("Case %d: Invalid\n",i);
 				else if(a<=0 || b<=0 || c<=0)
 					printf("Case %d: Invalid\n",i);
 				else if(a==b && b==c)
 					printf("Case %d: Equilateral\n",i);
 				else if(a==b || b==c || c==a)
 					printf("Case %d: Isosceles\n",i);
 				else
 					printf("Case %d: Scalene\n",i);
			}

		}
	return 0;
}
