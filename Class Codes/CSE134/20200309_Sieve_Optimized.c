#include <stdio.h>
#include <math.h>
#define sz 100000000

int siv[sz], prime[sz], cnt;

int main()
{
    int i, j, limit = sqrt(sz+1);

    for (i = 3; i<=limit; i+=2)
        if(!siv[i])
            for (j=i*i; j<sz; j+=i+i)
                siv[j] = 1;
    prime[cnt++] = 2;
    for (i=3; i<sz; i+=2)
        if(!siv[i]) prime[cnt++] = i;

//    for (i=0; i<cnt; i++)
//        printf("%d%c",prime[i],",\n"[i==cnt-1]);


    printf("Total Primes = %d\n",cnt);

    return 0;
}
