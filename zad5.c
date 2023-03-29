#include <stdio.h>
int main()
{
	float principal, interest_rate;
	int years=0;
	printf("Enter the principal amount: ");
	scanf("%f", &principal);
	printf("Enter the annual interest rate in percent: ");
	scanf("%f", &interest_rate);
	while (principal<1000000)
	{
		float interest = principal*(interest_rate / 100.0);
		principal += interest;
		years++;
	}
	printf("It will take %d years to reach 1000000\n", years);
	system ("pause");
	return 0;
}
