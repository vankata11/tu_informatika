#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double a,b,c,d,pi=3.14;
	printf("Vavedete radiusa na okrujnostta: ");
	scanf("%lf", &c);
	b=pi*(pow(c,2));
	a=3*pow(c,2)*sqrt(3);
	printf("a= %f\n",a);
	printf("b= %f\n",b);
	d=a-b;
	printf("Razlikata mejdu ploshtite na triugulnika i vpisanata okrujnost e: d= %f\n",d);
	system ("pause");
	return 0;
}
