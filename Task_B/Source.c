#include <stdio.h>

#define SIZE 101

int A[SIZE];

int main() {

	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		int L, R, C;
		scanf("%d %d %d", &L, &R, &C);
		for (int j = L; j <= R; ++j) {
			A[j] = C;
		}
	}

	for (int i = 0; i < N; ++i) {
		printf("%d ", A[i]);
	}
	return 0;
}