#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i, j;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
