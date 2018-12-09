#include <stdio.h>

int main(void) {

	int N, count = 0;
	scanf("%d", &N);

	for (int x1 = 0; x1 < 101; ++x1) 
		for (int x2 = 0; x2 < 101; ++x2) 
			for (int x3 = 0; x3 < 101; ++x3) 
				for (int x4 = 0; x4 < 101; ++x4) 
					if ((x1 + 2 * x2 + 3 * x3 + 4 * x4) == N)
						count++;
	
	printf("%d", count);
	return 0;
}