#include <stdio.h>

#define i64 long long int
#define SIZE 100001

i64 A[SIZE];
i64 half_sum[SIZE];

int main() {

	int N, Q;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		scanf("%I64d", &A[i]);
	}
	
	for (int i = 1; i <= N; ++i) {
		half_sum[i] = half_sum[i - 1] + A[i - 1];
	}

	scanf("%d", &Q);
	for (int i = 0; i < Q; ++i) {
		int L, R;
		scanf("%d %d", &L, &R);
		printf("%I64d ", half_sum[R] - half_sum[L - 1]);
	}

	return 0;
}