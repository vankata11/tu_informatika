#include <stdio.h>
int main()
{
	double value, amot;
	int years = 0;
	printf("Enter the initial value of the equipment: ");
	scanf("%lf",&value);
	
	printf("Enter the annual depreciation deduction as a percentage: ");
	scanf("%lf", &amot);
	amot /= 100;
	while (value>0)
	{
		value -= value*amot;
		years++;
	}
	printf("The value of the equipment will be zeroed out after %d years.\n",years);
	system("pause");
	return 0;
}
