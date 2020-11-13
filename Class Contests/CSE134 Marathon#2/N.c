#include<stdio.h>
#include<math.h>
long long int div2(long long int n);
long long int div5(long long int n);
long long int fact2(long long int n);
long long int fact5(long long int n);
int result(int x, int y);
int main()
{
	long long int n,r,p,q;
	int f2,f5,p2,p5,T,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%lld%lld%lld%lld",&n,&r,&p,&q);
		f2=div2(n)-div2(r)-div2(n-r);
		f5=div5(n)-div5(r)-div5(n-r);
		p2=fact2(p)*q;
		p5=fact5(p)*q;
		int x2=f2+p2;
		int x5=f5+p5;
		printf("Case %d: %d\n",i,result(x2,x5));
	}
	return 0;
}
long long int div2(long long int n)
{
    long long int  sumd2=0;
    while(n>=2)
    {
        sumd2+=n/2;
        n/=2;
    }
    return sumd2;
}
long long int div5(long long int n)
{
    long long int  sumd5=0;
    while(n>=5)
    {
        sumd5+=n/5;
        n/=5;
    }
    return sumd5;
}
long long int fact2(long long int n)
{
    long long int  count2=0;
    while(n%2==0)
    {
        n/=2;
        count2++;
    }
    return count2;
}
long long int fact5(long long int n)
{
    long long int  count5=0;
    while(n%5==0)
    {
        n/=5;
        count5++;
    }
    return count5;
}
int result(int x, int y)
{
	if(x>y)
	return y;
	else return x;
}
