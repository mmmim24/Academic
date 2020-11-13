#include<stdio.h>
#include<string.h>

int main()
{
char phone[30];
int i,l;
    while(scanf("%s",&phone)!=EOF)
    {
        l=strlen(phone);
        for(i=0;i<l;i++)
        {
            switch(phone[i])
            {
                 case 'A':
                 case 'B':
                 case 'C':
				 	printf("2");
					break;
                 case 'D':
                 case 'E':
                 case 'F':
				 	printf("3");
					break;
                 case 'G':
                 case 'H':
                 case 'I':
				 	printf("4");
					break;
                 case 'J':
                 case 'K':
                 case 'L':
				 	printf("5");
					break;
                 case 'M':
                 case 'N':
                 case 'O':
				 	printf("6");
					break;
                 case 'P':
                 case 'Q':
                 case 'R':
                 case 'S':
				 	printf("7");
					break;
                 case 'T':
                 case 'U':
                 case 'V':
				 	printf("8");
					break;
                 case 'W':
                 case 'X':
                 case 'Y':
                 case 'Z':
				 	printf("9");
					break;
                 default:
				 	printf("%c",phone[i]);
					break;
            }
        }
        printf("\n");
    }
    return 0;
}
