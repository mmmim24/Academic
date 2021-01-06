#include<bits/stdc++.h>
using namespace std;
int ans;
int main()
{
    char str1[101],str2[101];
    scanf("%s %s",str1,str2);
    strcpy(str1,strlwr(str1));
    strcpy(str2,strlwr(str2));
    int l = strlen(str1);
    for(int i = 0;i<l;i++)
    {
        if(str1[i]==str2[i])
            continue;
        else if(str1[i]>str2[i])
        {
            ans = 1;
            break;
        }
        else
        {
            ans = -1;
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}
