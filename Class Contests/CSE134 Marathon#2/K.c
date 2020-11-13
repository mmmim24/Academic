#include<stdio.h>
#include<string.h>
int temp;
int main()
{
	int T;
	scanf("%d",&T);
	int i;
	for(i=1;i<=T;i++)
	{
		char rn[21],gn[21];
		int j;
		scanf("%s%s",rn,gn);
		if (strlen(rn)!=strlen(gn))
			printf("No\n");
		else
  			for(j=0;j<strlen(rn);j++)
   				{
   					if(rn[j]!=gn[j])
    					{
    						if(rn[j]=='a' || rn[j]=='e' || rn[j]=='i' || rn[j]=='o' || rn[j]=='u')
     						{
     							if(gn[j]=='a' || gn[j]=='e' || gn[j]=='i' || gn[j]=='o' || gn[j]=='u')
     							temp++;
     							else
      							{
									printf("No\n");
      							  	break;
								}
     						}
    						else
     						{
	 							printf("No\n");
     							break;
							}
    					}
   					if(j==strlen(rn)-1)
   						{
					   		printf("Yes\n");
   							break;
						}
   				}
  	}
	return 0;
}
