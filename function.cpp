#include <stdio.h>
int Add(int a,int b) {
	return (a + b);
}
int main(void) {
	int num_1 = 10;
	int num_2 = 20;
	int sum = Add(num_1, num_2);
		printf("%d",sum);
	return 0;
}