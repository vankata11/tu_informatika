#include <stdio.h>
#define  M 10
int main()
{
	int D[M][M];
	int A,B,R;
	int i,j;
	int sum=0;
	int count=0;
	printf("Program to find the aritmetic mean of elements above the main diagonals of array D[M,M]\n");
	printf("Author: [Your Name]\n\n");
	printf("Enter the elements of the array D[%d][%d]:\n",M,M);
	for (i=0;i<M;i++)
	{
		for (j=0;j<M;j++)
		{
			scanf("%d",&D[i][j]);
		}
	}
	printf("The input array D[%d][%d] is:\n", M,M);
	for (i=o;i<M;i++)
	{
		for (j=0;j<M;j++)
		{
			printf("%d",D[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the values of A,B, and R: ");
	scanf("%d %d %d", &A,&B,&R);
	for (i=0;i<M;i++)
	{
		for (j=A;j<=B;j++)
		{
			if(i<j && D[i][j]<R&&D[i][j]>-R)
			{
				sum +=D[i][j];
				count++;
			}
		}
	}
	if (count>0)
	{
		float mean=(float)sum/count;
		printf("n\Aritmetichnoto znachenie na elementite nad glawnite diagonali koito sa po-kasi ot procent d i lejat v intervala [%d,%d] e: %.2f\n",R,A,B,mean);
	}
	else
	{
		printf("\nNqma elementi nad glavnite diagonali koito sa po-kasi ot %d i lejat v intervala [%d,%d]\n",R,A,B);
	}
	system ("pause");
	return 0;
}
