#include <stdio.h>
int main()
{
    int T,i;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        int min=0,max=900000000,j,n,l,w,h;
        scanf("%d", &n);
        char name[n][100];
        int vol[n], cmin, cmax;
        for(j=0; j<n; j++)
        {
            scanf("%s", name[j]);
            scanf("%d%d%d", &l, &w, &h);
            vol[j] = l*w*h;
            if(vol[j]<max)
            {
                max = vol[j];
                cmax = j;
            }
            if(vol[j]>min)
            {
                min = vol[j];
                cmin = j;
            }
        }
        if(min == max) printf("Case %d: no thief\n",i);
        else printf("Case %d: %s took chocolate from %s\n",i, name[cmin], name[cmax]);
    }
    return 0;
}
