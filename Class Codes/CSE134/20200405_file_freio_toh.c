#include <stdio.h>
/**
n: L, C, R
1. n-1: L, R, C
2. Move n-th disk from L to R
3. n-1: C, L, R
*/
void tower(int n, char L, char C, char R)
{
    if(n==0) return;
    tower(n-1,L,R,C);
    printf("Disk#%d from %c to %c\n",n,L,R);
    tower(n-1,C,L,R);
}
int main()
{
    freopen("..\\..\\SEC\\abc.txt","r+",stdin);
    freopen("hello\\20200405_file_freio_toh.out","w+",stdout);
    int n;
    while(~scanf("%d", &n))
    {
        printf("Solution for n = %d\n", n);
        tower(n,'L','C','R');
    }
}
