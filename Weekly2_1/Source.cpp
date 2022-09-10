#include<stdio.h>
int main() {//65010536
	int a, b;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);
	printf("%d + %d = %d\n", a, b, (a + b));
	printf("%d - %d = %d\n", a, b, (a - b));
	printf("%d * %d = %d\n", a, b, (a * b));
	printf("%d / %d = %d\n", a, b, (a / b));
	return 0;
}