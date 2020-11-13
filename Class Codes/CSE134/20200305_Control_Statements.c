#include<stdio.h>
#include<string.h>

int main()
{
    int n, i;
    char s[100];
    scanf("%s", s);
    n = strlen(s);
    for (i = 0; i<n; i++)
    {
        if(s[i]!=s[n-i-1])
        {
            printf("not ");
            break;
        }
    }
    puts("palindrome");

}
