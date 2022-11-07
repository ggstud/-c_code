#include<stdio.h>
#include<math.h>
int main() {
	char c;
	scanf("%c",&c);
	int n = c - 'A' + 1;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 2 * n - 1;j++) {
			char C = 'A' + i - fabs(n - j);
			if (j < n - i || j > n + i)
				printf(" ");
			else
				printf("%c",C);
		}
		printf("\n");
	}
	return 0;
}