#include<stdio.h>

int main() {
	int A, B, i, count = 0;
	printf("Input Number A : ");
	scanf_s("%d", &A);
	printf("Input Number B : ");
	scanf_s("%d", &B);

	for (i = A; i <= B; i++) {
		if ((i % 5) == 0) {
			printf("%d ", i);
			count++;
		}
	}

	printf("\nCount : %d", count);

	return 0;
}