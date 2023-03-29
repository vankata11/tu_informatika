# include <stdio.h>
int main()
{
	int i;
	float arr[10];
	float num;
	int count = 0;
	printf("Enter 10 real numbers:\n");
	for ( i=0;i<10;i++)
	{
		scanf("%f", &arr[i]);
	}
	printf("Enter a number to compare against:\n");
	scanf("%f", &num);
	for(i=0;i<10;i++)
	{
		if(arr[i]>num)
		{
			count++;
		}
	}
	printf("Elements of the array:\n");
	for(i=0;i<10;i++)
	{
		printf("%f",arr[i]);
	}
	printf("\nNumber of elements greater than %f: %d\n",num,count);
	system("pause");
	return 0;
}
