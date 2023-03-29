#include <stdio.h>
int main()
{
	int i;
	int arr[15];
	for(i=0; i<15; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	printf("The array in reverse order is:\n");
	for(i=14; i>=0; i--)
	{
		printf("%d", arr[i]);
	}
	system ("pause");
	return 0;
}
