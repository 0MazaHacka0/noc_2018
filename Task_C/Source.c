#include <stdio.h>

#define SIZE 101

int A[SIZE][SIZE];
int indexes[SIZE];

int main() {

	int N, Q;

	scanf("%d %d", &N, &Q);
	for (int i = 0; i < Q; ++i) {
		int i, x;
		scanf("%d %d", &i, &x);

		A[i][indexes[i]] = x;
		++indexes[i];
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < indexes[i]; ++j) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}