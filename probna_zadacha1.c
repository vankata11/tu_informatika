6
#include<stdio.h>
int main()
{
	float A[10][10];
	float B[100];
	int n=0;
	int i,j;
	printf("Program to process the array A[10,10]\n");
	printf("Ime:\n");
	printf("Enter 100 numbers in the range[-999.9,999.999]:\n");
	for ( i=0; i<10; i++)
	{
		for( j=0;j<10;j++)
		{
			scanf("%f", &A[i][j]);
		}
	}
	printf("\nInput array A:\n");
	for(i=0;i<10;i++)
	{
		for(j=0; j<10; j++)
		{
			printf("%.3f ", A[i][j]);
		}
		printf("\n");
	}
	
		for (i=0;i<10;i++)
		{
			for (j=0;j<10;j++)
			{
				if (A[i][j]>0)
				{
					B[n]=A[i][j];
					n++;
				}
			}
		}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(B[i]>B[j])
			{
				float temp = B[i];
				B[i]=B[j];
				B[j]=temp;
			}
		}
	}
	printf("\nSorted array B containing all positive numbers in A:\n");
		for (i=0;i<n;i++)
		{
			printf("%3f",B[i]);
		}
	{	
		printf("\n");
	}
	system("pause");
	return 0;
}
