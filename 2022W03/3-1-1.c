#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	double m;
	printf("������n(n>3):");
	scanf_s("%d", &n);
	m = sqrt(n);
	for (i = 2; i <= m; i++)
		if (n % i == 0)
			break;
	if (i <= m)
		printf("%d ��������\n", n);
	else
		printf("%d ������\n", n);

	return 0;
}