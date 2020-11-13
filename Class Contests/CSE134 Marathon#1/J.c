#include<stdio.h>
#include<math.h>
int dec(int bin)
{
    int dec=0,e=0,rem;
    while(bin!=0)
	{
        rem=bin%10;
        bin=bin/10;
        dec=dec+rem*pow(2,e);
        ++e;
    }
    return dec;
}
int main()

{
	int i,T,index;
	int d1,d2,d3,d4;
	int b1,b2,b3,b4;
	scanf("%d",&T);
	for(i=1;i<=T&&T<=100;i++)
	{
		scanf("%d.%d.%d.%d",&d1,&d2,&d3,&d4);
		scanf("%d.%d.%d.%d",&b1,&b2,&b3,&b4);

			if((d1==dec(b1))&&(d2==dec(b2))&&(d3==dec(b3))&&(d4==dec(b4)))
				printf("Case %d: Yes\n",i);
			else
				printf("Case %d: No\n",i);
	}
	return 0;
}
