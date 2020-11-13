#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int QUEUE[1000006];
int main(){
	int t;
	scanf("%d", &t);
	int n,x=0,f=0;
	while(t--)
    {
		scanf("%d", &n);
		if(n==1)
            scanf("%d", &QUEUE[x++]);
        else if(n==2)
            f = min(x,++f);
		else if(n==3)
        {
			if(x-f>0)
				printf("%d\n",QUEUE[f]);
			else puts("Empty!");
		}
	}
//	for( int i = 0;QUEUE[i]!=0;i++)
//        printf("%d ",QUEUE[i]);
}
