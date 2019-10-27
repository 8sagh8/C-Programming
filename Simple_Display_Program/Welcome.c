#include <stdio.h>

int main(void) {

	// Different ways to print WELCOME

	printf("==========Simple Way =========\n\n");

	printf("********************************\n");
	printf("*** Welcome to C Programming ***\n");
	printf("********************************\n");
	printf("\n\n");

	printf("==========Iteration FOR =========\n\n");
	int size = 32;

	for (int i = 0; i < size; ++i) {
		printf("*");
	}
	printf("\n");

	printf("*** Welcome to C Programming ***\n");

	for (int i = 0; i < size; ++i) {
		printf("*");
	}
	printf("\n");
	printf("\n\n");

	printf("==========Iteration WHILE =========\n\n");
	int sizeW = 32;
	int j = 0;

	while (j < sizeW) {
		printf("*");
		++j;
	}
	printf("\n");

	printf("*** Welcome to C Programming ***\n");

	j = 0;
	while (j < sizeW) {
		printf("*");
		++j;
	}
	printf("\n");
	printf("\n\n");


	printf("==========Iteration DO-WHILE =========\n\n");
	int sizeD = 32;
	int k = 0;

	do{
		printf("*");
		++k;
	} while (k < sizeD);

	printf("\n");

	printf("*** Welcome to C Programming ***\n");

	k = 0;
	do {
		printf("*");
		++k;
	} while (k < sizeD);

	printf("\n");
	printf("\n\n");

	return 0;
}