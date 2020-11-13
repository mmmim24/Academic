#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define CHK(x,y) ( (x=='(' && y==')') || ( x=='{' && y=='}') || ( x=='[' && y==']' ))

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		stack<char> b;
		int q, n, i=0;
		char s[1005];
		scanf("%s", &s);
		int l = strlen(s);
		for(i=0; i<l; i++) {
			if(s[i]=='(' || s[i]=='{' || s[i]=='[') b.push(s[i]);
			else if(!b.size()) break;
			else if( CHK(b.top(), s[i])) b.pop();
			else break;
			// cout << b.top() << " ";
			// printf("\n");
		}
		if (i==l && b.size()==0) printf("YES\n");
		else printf("NO\n");
	}
}
