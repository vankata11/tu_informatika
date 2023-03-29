# include <stdio.h>
int main()
{
	int i;
	int arr[20];
	int count=0,sum=0;
	printf("Enter 20 integer values:\n");
	for(i=0;i<20;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<20;i++)
	{
		if(arr[i]>0)
		{
			count++;
			sum += arr[i];
		}
	}
	printf("The sum of the elements greater than zero is %d\n", sum);
	printf("The number of elements greater than zero is %d\n", count);
	system("pause");
	return 0;
}
