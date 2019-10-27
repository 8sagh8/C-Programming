#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int numDay = 0;
	int high[7] = {0};
	int low[7] = { 0 };
	int highest = 0;
	int lowest = 0;
	int highestDay = 0, lowestDay = 0;
	int number = 0;
	double average = 0.00;

	printf("---=== IPC Temperature Calculator V2.0 ===---");
	printf("\nPlease enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &numDay);

	while (numDay < 4 || numDay > 9) {
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &numDay);
	}


	printf("\n");
	for (int i = 0; i < numDay; ++i) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);

		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);
	}
	printf("\n");

	printf("Day   Hi   Low\n");
	
	
	for (int i = 1; i <= numDay; ++i) {
		printf("%d     %d     %d\n", i, high[i-1], low[i-1]);

		if (i < numDay && highest < high[i]) {
			highest = high[i];
			highestDay = i + 1;
		}

		if (i < numDay && lowest > low[i]) {
			lowest = low[i];
			lowestDay = i + 1;
		}
	}

	printf("\n\nThe highest temperature was %d, on day %d\n", highest, highestDay);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowestDay);



	do {

		printf("\nEnter a number between 1 and 5 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &number);

		if (number >= 0) {
			while (number > 5 || number < 1) {
				printf("\nInvalid entry, please enter a number between 1 and 5, inclusive: ");
				scanf("%d", &number);
			}
			average = 0.00; // everytime before below function, average suppose to be zero because its GLOBAL VARIABLE will give incorrect value
			for (int i = 0; i < number; ++i) {
				double avg = ((double)high[i] + (double)low[i]);
				average += avg;
			}
			average /= ((double)number*2);
			printf("\nThe average temperature up to day %d is: %.2lf\n", number, average);
		}
	} while (number >= 0);

	printf("Goodbye!\n");

	return 0;
}
