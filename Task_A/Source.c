#include <stdio.h>

int main() {

	int A, B, C;
	scanf("%d %d", &A, &B);
	C = 180 - A - B;

	if (A <= 0 || B <= 0 || C <= 0) {
		printf("0");
		return 0;
	}

	if (A == 90 || B == 90 || C == 90) {
		printf("2");
		return 0;
	}

	if (A > 90 || B > 90 || C > 90) {
		printf("3");
		return 0;
	}
 
	printf("1");
	return 0;
}