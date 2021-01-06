#include<bits/stdc++.h>
using namespace std;
char s[] = "WUB";
int len,f;
int main()
{
    char str2[202],str1[202];
    scanf("%s",str1);
    int l = strlen(str1);
    for(int i = 0;i<l;)
    {
        if(str1[i]=='W'&&str1[i+1]=='U'&&str1[i+2]=='B')
        {
            if(str1[i+3]=='\0')
                break;
            if(f!=0)
            str2[len++] = ' ';
            i+=3;
            f=0;
        }
        else
        {
            str2[len++] = str1[i++];
            f = 1;
        }
    }
    for(int i = 0;i<len;i++)
        printf("%c",str2[i]);
    puts("");
    return 0;
}
