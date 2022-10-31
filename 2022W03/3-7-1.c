#include<stdio.h>
int GCD_iterative(unsigned int m, unsigned int n)
{
	unsigned int rem;
	while (n > 0)
	{
		rem = m % n;
		m = n;
		n = rem;
	}
	return m;
}
int main(void)
{
	int a, b, m;
	scanf_s("%d %d", &a, &b);
	m = GCD_iterative(a, b);
	printf("%d\n", m);
	return 0;
}