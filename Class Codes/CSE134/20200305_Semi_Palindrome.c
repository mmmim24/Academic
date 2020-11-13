#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, x, mismatch=0, m;
    char s[100];
    while(~scanf("%s %d", s, &x))
    {
        mismatch = 0;
        n = strlen(s);
        m = n/2;
        for (i = 0; i<m; i++)
        {
            if(s[i]!=s[n-i-1])
            {
                if(++mismatch>x)
                {
                    printf("not ");
                    break;
                }
            }
        }
        puts("semi-palindrome");
    }


}
/**
abba 0
abbu 0
abbu 1
abbu 2
abcd 3
hellohello 2
hellohello 3
hellohello 4
*/
