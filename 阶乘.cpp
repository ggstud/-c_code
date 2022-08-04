#include<stdio.h>
#define _CRT_SECURE_NO_WARNIGS
int n;
int sum = 0;
int main(void) {
	scanf_s("%d",&n);
	int result = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= i; j++) {
			result = result * j;
		}
		sum = sum + result;
	}
	printf("%d",sum);
}