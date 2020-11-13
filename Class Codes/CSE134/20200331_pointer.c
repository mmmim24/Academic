#include<stdio.h>
/**
u          v
----------------------------------------
|    3    |    4     |
----------------------------------------
pu * -> v
pv * -> u
ab * -> u
u, v, *pu, *pv
*/
int main()
{
    int u = 3;
    int *pu, v, *pv, *ab = NULL, *k=NULL;
    pu = &u; v = *pu;  pv = &v; v++; pu = &v;
    pu = pv; pv = &u; (*pv)--; ab = pu = &u;
    ++(*ab); --(*pu); ++(*pv); pv = ab = pu; pu = &v;
    printf("u = %d: &>%d, v = %d: &>%d\n",u, &u, v, &v);
    printf("pu = %d: *>%d, pv = %d: *>%d\n",pu, *pu, pv, *pv);
    return 0;
}
