#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int X=12, Y=6;
    double u1 = 1.0/((X*X)+1);
    double u2 = (double)(Y*Y)/((Y*Y)-1);
    double u3 = 5.0/((X*X)+(Y*Y));
    double u4 = 1.0/((X*X)-(Y*Y));
    double u5 = (u1+u2+u3)/u4;
    printf("Otgovor (variant s otdelnifunkcii): %f\n",u5);
    double u6 =  ((1/(X*X+1))+((double)(Y*Y)/((Y*Y)-1))+(5.0/((X*X)+(Y*Y))))/(1.0/((X*X)-(Y*Y)));
    printf("Otgovor (variant s izcqlo pisane): %f\n,u6");
	system("pause");
	return 0;
}
