#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    /// program 1  getchar
//    char c;
//    while((c = getchar())!=EOF)
//        putchar(toupper(c));/// printf("%c", toupper(c));
    /// program 2 sscanf, sprintf, string - place of null character
//    int x = 100,i;
//    char s[] = "Something going to happen, but who knows!\0Oh!",ss[100];
//    sscanf(s+37,"%s",ss);
//    printf("s = %s\n",s);
//    x+=s[10];
//    sprintf(s,"x = 100+s[10] = %d",x);
//    printf("s = %s, len = %d\n",s,strlen(s));
//    printf("s+19 = !%s!, len = %d\n",s+19,strlen(s+19));
//    printf("s+20 = #%s#, len = %d\n",s+20,strlen(s+20));
//    printf("ss = :%s:\n",ss);
//    puts("-----------------------------");
//    for (i=0;i<46; i++)
//        printf("i = %d, s[%d] = :%c:, ascii = %d\n",i,i,s[i],s[i]);
//    puts("-----------------------------");
    /// program 3 integer formatting
    int a=10, b=452, c=-56465, d=45646546;
//    printf("a=:%d: b=:%d: c=:%d: d=:%d:\n",a,b,c,d);
//    printf("a=:%4d: b=:%4d: c=:%4d: d=:%4d:\n",a,b,c,d);
//    printf("a=:%8d: b=:%8d: c=:%8d: d=:%8d:\n",a,b,c,d);
//    printf("a=:%08d: b=:%08d: c=:%08d: d=:%08d:\n",a,b,c,d);
//    printf("a=:%+d: b=:%+d: c=:%+d: d=:%+d:\n",a,b,c,d);
//    printf("a=:%+8d: b=:%+8d: c=:%+8d: d=:%+8d:\n",a,b,c,d);
//    printf("a=:%+08d: b=:%0+8d: c=:%+08d: d=:%0+8d:\n",a,b,c,d);
//    printf("a=:%-8d: b=:%-8d: c=:%-8d: d=:%-8d:\n",a,b,c,d);
//    printf("a=:%0-8d: b=:%0-8d: c=:%-08d: d=:%-08d:\n",a,b,c,d);
//    printf("a=:%-+8d: b=:%+-8d: c=:%-+8d: d=:%+-8d:\n",a,b,c,d);
//    printf("a=:%-+08d: b=:%0+-8d: c=:%-+08d: d=:%+-08d:\n",a,b,c,d);
//    scanf("%1d%2d%*3d%4d%d",&a,&b,&c,&d);
//    printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
//    scanf("%o%x%X%d",&a,&b,&c,&d);
//    scanf("%i%i%i%i",&a,&b,&c,&d);
//    printf("a=%o, b=%x, c=%i, d=%X\n",a,b,c,d);
//    printf("a=%#o, b=%#x, c=%#i, d=%#X\n",a,b,c,d);
    /// program 4 floating point number formatting
    float p = 4.49, q=-.00000005, r = 100005.21454, t=78565465e-14;
//    printf("p=:%lf: q=:%lf: r=:%lf: t=:%lf:\n",p,q,r,t);
//    printf("p=:%f: q=:%f: r=:%f: t=:%f:\n",p,q,r,t);
//    printf("p=:%10f: q=:%10f: r=:%10f: t=:%10f:\n",p,q,r,t);
//    printf("p=:%e: q=:%e: r=:%e: t=:%e:\n",p,q,r,t);
//    printf("p=:%.0f: q=:%.0f: r=:%.0f: t=:%.0f:\n",p,q,r,t);
//    printf("p=:%#.0f: q=:%#.0f: r=:%#.0f: t=:%#.0f:\n",p,q,r,t);
//    printf("p=:%10.0f: q=:%10.0f: r=:%10.0f: t=:%10.0f:\n",p,q,r,t);
//    printf("p=:%20.10f: q=:%20.10f: r=:%20.10f: t=:%20.10f:\n",p,q,r,t);
//    printf("p=:%+020.10f: q=:%+020.10f: r=:%+020.10f: t=:%-020.10f:\n",p,q,r,t);
//    printf("p=:%+020.10e: q=:%+020.10e: r=:%+020.10e: t=:%-020.10e:\n",p,q,r,t);
//    printf("p=:%.0e: q=:%.0e: r=:%.0e: t=:%.0e:\n",p,q,r,t);
//    printf("p=:%.1f: q=:%.1f: r=:%.1f: t=:%.1f:\n",p,q,r,t);
//    printf("p=:%10.1f: q=:%10.1f: r=:%10.1f: t=:%10.1f:\n",p,q,r,t);
//    printf("p=:%.1e: q=:%.1E: r=:%.1e: t=:%.1e:\n",p,q,r,t);
    /// program 5 scanf string pattern matching
    char s[100]="wow!", ss[100]="wOw!Really Great!",
    sss[100] = "100% accurAte! Handsome! Awesome! Speechless!";
//    scanf("%[]",s);
//    printf("s = :%s:, len = %d\n",s, strlen(s));
//    scanf("%[^a-d]",s);
//    scanf("%[-a-d; GR]",ss);
//    printf("s = :%s:, len = %d\n",s, strlen(s));
//    printf("s = :%s:, len = %d\n",ss, strlen(ss));
    printf("s=:%s:\nss=:%s:\nsss=:%s:\n\n",s,ss,sss);
//    printf("s=:%20s:\nss=:%20s:\nsss=:%20s:\n\n",s,ss,sss);
//    printf("s=:%020s:\nss=:%020s:\nsss=:%020s:\n\n",s,ss,sss);
//    printf("s=:%-20s:\nss=:%-20s:\nsss=:%-20s:\n\n",s,ss,sss);
    printf("s=:%+20s:\nss=:%+20s:\nsss=:%+20s:\n\n",s,ss,sss);
    printf("s=:%20.5s:\nss=:%20.5s:\nsss=:%20.5s:\n\n",s,ss,sss);
    printf("s=:%-20.5s:\nss=:%-20.5s:\nsss=:%-20.5s:\n\n",s,ss,sss);
//    printf("s=:%-020s:\nss=:%-020s:\nsss=:%-020s:\n\n",s,ss,sss);
    return 0;
}
/***
63458465321654
065355 0X4fFbFd 0xd 0123
sfsad RRRG; -  dkdfjalkds
*/









