#include<stdio.h>

int main()
{
    int a=0,q,i,j,p,k,m; /// there are 25 lights: 0,1,2,...,24
    scanf("%d", &q);
    for (p=0; p<q; p++)
    {
        scanf("%d", &k);
        switch (k)
        {
        case 1:/// 1. Turn the i-th light on
            scanf("%d",&i);
            a|=(1<<i);
            break;
        case 2:/// 2. Turn the i-th light off
            scanf("%d",&i);
            if((1<<i)&a) a^=(1<<i);
            break;
        case 3:/// 3. Toggle the i-th light
            scanf("%d",&i);
            a^=(1<<i);
            break;
        case 4:/// 4. Show the status of i-th light
            scanf("%d",&i);
            printf("%d\n", a&(1<<i) );
            break;
        case 5:/// 5. Show the status of all lights
            for (i=0; i<25; i++)
                printf("%d", a&(1<<i) );
            puts("");
            break;
        case 6:/// 6. Turn the i-th to j-th lights on
            scanf("%d %d",&i,&j);
            a|= (( (1<<(j-i+1))-1  )<<i);
            break;
        case 7:/// 7. Turn the i-th to j-th lights off
            scanf("%d %d",&i,&j);

            break;
        case 8:/// 8. Toggle the i-th to j-th lights
            scanf("%d %d",&i,&j);

            break;
        case 9:/// 9. Toggle all lights
            scanf("%d %d",&i,&j);

            break;
        case 10:/// 10. Show the status of i-th to j-th lights
            scanf("%d %d",&i,&j);

            break;
        default:
            puts("Invalid Query!");
            break;
        }

    }

}
/**
1. Turn the i-th light on
2. Turn the i-th light off
3. Toggle the i-th light
4. Show the status of i-th light
5. Show the status of all lights
6. Turn the i-th to j-th lights on
7. Turn the i-th to j-th lights off
8. Toggle the i-th to j-th lights
9. Toggle all lights
10. Show the status of i-th to j-th lights
*/
