#include<stdio.h>
int fac_bit_count(int n)
{
	int N=1;
	int sum=1;
	while (N <= n)
	{
		sum = sum * N;
		N++;
	}
	int a = 0;
	do
	{
		sum = sum / 10;
		a++;
	} while (sum != 0);
	printf("%d", a);
	return 0;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	fac_bit_count(n);
	return 0;
}