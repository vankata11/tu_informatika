#include <stdio.h>
int main()
{
	int i;
	int array[6];
	int min = array[0];
	int min_index = 0;
	printf("Enter 6 integers:\n");
	for (i=0; i<6; i++)
	{
		scanf("%d", &array[i]);
	}
	for (i=1; i<6; i++)
	{
		if (array[i]<min)
		{
			min = array[i];
			min_index = i;
		}
	}
	printf("The minimum value in the array is %d and its index is %d\n", min, min_index);
	system ("pause");
	return 0;
}
