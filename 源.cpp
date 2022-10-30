#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int num = 0;
	int num2 = 0;
	int sum = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d",&num);
			int x = num;
			for (sum = 0; num != 0;) {
				sum = sum + num % 10;
				num = num / 10;
			}
			num = x;
		if (sum == sum2) {
			if (num > num2)
				num2 = num;
		}
		if (sum > sum2) {
			num2 = num;
			sum2 = sum;
		}
	}
	printf("%d", num2);
	return 0;
}