#include<stdio.h>
#include<string.h>
int main()
{
    long long int T,i,j,count=0;;
    scanf("%lld", &T);
    char in1[40], in2[40], c1, c2, month1[15], month2[15];
    long long int  d1,d2,y1,y2;
    for(i = 1; i<=T; i++)
    {
        scanf("%s %lld, %lld", month1, &d1, &y1);
        scanf("%s %lld, %lld", month2, &d2, &y2);

        if(strcmp(month1,"January")!=0 && strcmp(month1,"February")!=0) y1++;
        if(strcmp(month2,"January")==0 || (strcmp(month2,"February")==0 && d2<29)) y2--;
        int f=(y2/4)-((y1-1)/4);
        int h=(y2/100)-((y1-1)/100);
        int fh=(y2/400)-((y1-1)/400);
		int r=f-h+fh;

		printf("Case %d: %d\n",i,r);
		count=0;
    }
    return 0;
}
