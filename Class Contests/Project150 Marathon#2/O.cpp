#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("../../../../input.txt","r+",stdin);
    int T;
    scanf("%d",&T);
    for(int i = 1;i <= T;i++)
    {
        int n,m,val;
        char str[100];
        deque <int> dq;
        scanf("%d %d",&n,&m);
        printf("Case %d:\n",i);
        for(int j = 1;j <=m ;j++)
        {
            scanf("%s",str);
            if(str[4]=='L' || str[4]=='R')
            {
                scanf("%d",&val);
                if(dq.size()==n)
                {
                    puts("The queue is full");
                    //continue;
                }
                else if(str[4]=='L')
                {
                    dq.push_front(val);
                    printf("Pushed in left: %d\n",val);
                }
                else
                {
                    dq.push_back(val);
                    printf("Pushed in right: %d\n",val);
                }
            }
            else if(str[3]=='L' || str[3]=='R')
            {
                if(dq.size()==0)
                {
                    puts("The queue is empty");
                    continue;
                }
                else if(str[3]=='L')
                {
                    printf("Popped from left: %d\n",dq.front());
                    dq.pop_front();
                }
                else
                {
                    printf("Popped from right: %d\n",dq.back());
                    dq.pop_back();
                }
            }
        }
    }
}