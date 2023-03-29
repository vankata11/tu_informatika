#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x0,y0,x1,y1,strana=0,P=0;
    int i;
    for(i=0;i<3;i++)
    {
    	printf("Vavdete x0 i y0;");
    	scanf("%lf",&x0);
    	scanf("%lf",&y0);
    	printf("Vavedete x1 i y1;");
    	scanf("%lf",&x1);
    	scanf("%lf",&y1);
    	strana=sqrt(pow((x0-x1),2)+ pow((y0-y1),2));
    	printf("%f\n",strana);
    	P+=strana;
    }
    printf("P= %f\n",P);
	system("pause");
	return 0;
}
