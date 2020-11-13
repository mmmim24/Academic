#include<stdio.h>
int main()
{
	int n,m,i,j,k,ov,c;
	while(scanf("%d%d",&i,&j)==2 && i>0 && j>0)
		{
			c=0;
			printf("%d %d ",i,j);
			if(i>j)
			{
				k=j;
				j=i;
				i=k;
			}
			for(n=i;n<=j;n++)
    		{
    			ov=1;
    			for(m=n;m!=1;m=m)
        		{
        			if(m%2==0)
        				m=m/2;
        			else
        				m=3*m+1;
        				ov=ov+1;
        		}
    			if(ov>=c)
    			c=ov;
    		}
    		printf("%d\n",c);
		}
	return 0;
}
