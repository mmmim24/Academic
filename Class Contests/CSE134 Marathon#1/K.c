#include<stdio.h>
int main()

{
	int i,T,grade,av;
	int T1,T2,F,A,C1,C2,C3;
	scanf("%d",&T);

	for(i=1;(T<100)&&i<=T;i++)
	{
		scanf("%d %d %d %d %d %d %d",&T1,&T2,&F,&A,&C1,&C2,&C3);

		if(C1<=C2&&C1<=C3)
			av=(C2+C3)/2;
		else if(C2<=C3&&C2<=C1)
			av=(C1+C3)/2;
		else if(C3<=C2&&C3<=C1)
			av=(C2+C1)/2;


		grade=T1+T2+F+A+av;
		if(grade>=90)
 			printf("Case %d: A\n",i);
 		else if(grade>=80)
 			printf("Case %d: B\n",i);
 		else if(grade>=70)
 			printf("Case %d: C\n",i);
 		else if(grade>=60)
 			printf("Case %d: D\n",i);
 		else if(grade<60)
 			printf("Case %d: F\n",i);
	}

	return 0;
}
