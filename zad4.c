#include <stdio.h>
int main()
{
	int count = 0, even_count = 0, sum = 0;
	float average;
	while (even_count < 10)
	{
		int num;
		printf("Enter an integer: ");
		scanf("%d", &num);
		count++;
		if(num % 2 ==0)
		{
			even_count++;
			sum += num;
		}
	}
	average = (float) sum / even_count;
	printf("Total number of entered numbers: %d\n", count);
	printf("Average of the ten even numbers: %.2f\n",average);
	system ("pause");
	return 0;
}
