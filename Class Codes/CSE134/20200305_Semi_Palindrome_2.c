#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, x, mismatch=0, m;
    char s[100];
    while(~scanf("%s", s))
    {
        mismatch = 0;
        n = strlen(s);
        m = n/2;
        for (i = 0; i<m; i++)
            if(s[i]!=s[n-i-1])
                ++mismatch;

       printf("%d\n", mismatch);
    }


}
/**
abba
abbu
abcd
hellohello
asdkljhrfashdoiufhweiuofweniwevnnweiuvow
*/
