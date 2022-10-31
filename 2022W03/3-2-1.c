#include<stdio.h>

void triangle_judge(int a, int b, int c) {
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c && a == c)
		{
			printf("Yes.\n等边三角形\n");
		}
		if (a == b && a != c && b != c && a + b > c && a + c > b && b + c > a)
		{
			printf("Yes.\n等腰三角形\n");
		}
		if (a == c && a != b && b != c && a + b > c && a + c > b && b + c > a)
		{
			printf("Yes.\n等腰三角形\n");
		}
		if (b == c && b != a && a != c && a + b > c && a + c > b && b + c > a)
		{
			printf("Yes.\n等腰三角形\n");
		}
		if (a + b > c && a + c > b && b + c > a && a != b && a != c && b != c)
		{
			printf("Yes.\n三角形\n");
		}
	}
	else {
		printf("NO");
	}


}
int main() {

	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	triangle_judge(a, b, c);
	return 0;
}