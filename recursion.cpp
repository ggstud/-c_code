#define _CRT_SECURE_NO_WARNIGS
#include<stdio.h>
void print(int n) {
	if (n > 9) {
		print(n / 10);
	}
	printf("%d ", n % 10);
}


int main(void) {
	int num;
	scanf_s("%d", &num);
	print(num);
	return 0;
}