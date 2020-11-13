#include<stdio.h>
int main()
{
    unsigned long long a,b;
    int i,m,n,carry,count,sum;
    while(scanf("%llu%llu",&a,&b)==2)
    {
        if(a==0 && b==0)
            break ;
        m=0;
        n=0;
        count=0;
        carry=0;
        for(i=0;; i++)
        {
            if(a==0&&b==0)
                break;
            m=a%10;
            a=a/10;
            n=b%10;
            b=b/10;
            sum=n+m+carry;
            if(sum>9)
            {
                count++;
                carry=1;
            }
            else
            {
                carry=0;
            }
        }
        if(count==1)
        {
          printf("%d carry operation.\n",count);
        }
        else if(count>1)
        {
            printf("%d carry operations.\n",count);
        }
        else if(count==0)
        {
            printf("No carry operation.\n");
        }

    }
return 0;
}
