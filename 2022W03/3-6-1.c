#include<stdio.h>
int GCD_recursive(int m, int n) {
	if (n == 0)
		return m;
	else
		return GCD_recursive(n, m % n);
}
int main() {
	int a, b, m;
	scanf_s("%d %d", &a, &b);
	m = GCD_recursive(a, b);
	printf("%d\n", m);
	return 0;
}