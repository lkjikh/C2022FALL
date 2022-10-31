#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	double m;
	printf("请输入n(n>3):");
	scanf_s("%d", &n);
	m = sqrt(n);
	for (i = 2; i <= m; i++)
		if (n % i == 0)
			break;
	if (i <= m)
		printf("%d 不是素数\n", n);
	else
		printf("%d 是素数\n", n);

	return 0;
}