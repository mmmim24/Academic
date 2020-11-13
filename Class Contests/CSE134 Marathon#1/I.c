#include<stdio.h>
int main()
{
   int T;
   int N,K,P,i,count,j;
   scanf("%d",&T);
   {
      for(i=1;i<=T;i++)
      {
          	count=0;
          	scanf("%d%d%d",&N,&K,&P);
          	for(j=K; ;j++)
          	{
            	  if(count==P)
                	break;
              	if(j==N)
              	{
                	  count++;
                  	j=0;
              	}
              	else{
                	count++;
              	}
          	}
          printf("Case %d: %d\n",i,j);
      }
   }
   return 0;
}
