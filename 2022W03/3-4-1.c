#include<stdio.h>
int is_pow2(double a)
{
	
	while (a>1)
	{
		a = a / 2;
	}
	if(a==1)
	{
		printf("0");
	}
	else { printf("-1"); }
	
}
int main()
{
	double a;
	scanf_s("%lf", &a);
	is_pow2(a);
	return 0;
}

