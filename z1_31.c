#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("Vavedete a=");
	scanf("%d",&a);
	printf("Vavedete b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	system("pause");
	return 0;
}
