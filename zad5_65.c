#include <stdio.h>
int main()
{
	float arr[15];
	int i;
	printf("Enter 15 real numbers: \n");
	for(i=0; i<15; i++)
	{
		scanf("%f", &arr[i]);
	}
	for(i=2; i<15; i+=3)
	{
		printf("Index %d, Value: %f\n", i, arr[i]);
	}
	system ("pause");
	return 0;
}
