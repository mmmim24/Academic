#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int STACK[1000006];
int main(){
	int t;
	scanf("%d", &t);
	int n,x=0;
	while(t--)
    {
		scanf("%d", &n);
		if(n==1)
            scanf("%d", &STACK[x++]);
        else if(n==2)
            x = max(x-1,0);
		else if(n==3)
        {
			if(x-1>=0)
				printf("%d\n",STACK[x-1]);
			else puts("Empty!");
		}
	}
}
