#include <stdio.h>

int main()
{
    char c;
    int x, y;
    FILE *fin = fopen("E:\\Google Drive\\SUST\\CSE_133_2019\\20200405_input.in", "r+"), *fout; /// absolute addressing, relative addressing
//    fout = fopen("20200405_output.out","w+");
    fout = fopen("20200405_output.out","a+");


    while(!feof(fin))
    {
        fscanf(fin," %c", &c);
        fscanf(fin,"%d %d", &x, &y);

        if(c=='+') fprintf(fout,"c = %c x = %d y = %d, x + y = %d\n",c,x,y,x+y);
        else if(c=='-') fprintf(fout,"c = %c x = %d y = %d, x + y = %d\n",c,x,y,x-y);
        else if(c=='*') fprintf(fout,"c = %c x = %d y = %d, x + y = %d\n",c,x,y,x*y);
        else if(c=='/') fprintf(fout,"c = %c x = %d y = %d, x + y = %d\n",c,x,y,x/y);
        else  fprintf(fout,"c = :%c: x = :%d: y = :%d:\n",c,x,y);
    }
    fclose(fout);

    fclose(fin);

    return 0;
}
