#include<stdio.h>
#include<string.h>
int a,b,c,n,m;
char str[101],ans[3];
int main()
{
    scanf("%d %s",&n,str);
    for(a = 0;a < n-1;a++)
    {
        c = 0;
        for(b = 0;b < n-1;b++)
        {
            if(str[a]==str[b]&&str[a+1]==str[b+1])
                c++;
            if(c>m)
            {
                m = c;
                ans[0] = str[a], ans[1] = str[a+1];
            }
        }
    }
    printf("%s\n",ans);
    return 0;
}
