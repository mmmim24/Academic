#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct student{
    int reg;
    struct date *birthday;
    struct date today;
} std_info[4], *cur;

int main()
{
    struct date std_birthday[]={10,12,1998, 7,3,2001, 5, 9, 1998, 29, 2, 2000}, *cur_std;
    int i,n=4;
    for (i=0; i<n; i++)
    {
        cur_std = &std_birthday[i];
        cur = &std_info[i];
        cur->birthday = cur_std;
        cur->birthday->day -= 2;
        cur->today . day = 8;
        cur->today . month = 4;
        cur->today . year = 2020;
        cur->reg = 20203311+i;
        printf("Reg#%08d : %02d day, %02d month, %04d year\n", cur->reg,
               cur_std -> day, cur_std->month, (*cur_std).year
               );

    }
    return 0;
}
/**
struct D{
    struct E *e[30];
} *d;
a->b.c.d->e[12]->f.g->h = &i;
*/
