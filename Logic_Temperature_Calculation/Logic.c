#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMS 4

int main(void) {
	
	printf("---=== IPC Temperature Analyzer ===---");

	int high[NUMS] = {0};
	int low[NUMS] = {0};
	double mLow = 0.00;
	double mHigh = 0.00;
	double mtemp = 0.00;
	int highestTemp = 0, lowestTemp = 0, highestDay = 0, lowestDay = 0;

	for (int i = 0; i < NUMS; ++i) {
		printf("\nEnter the high value for day %d: ", i + 1);
		scanf("%d", &high[i]);

		printf("\nEnter the low value for day %d: ", i + 1);
		scanf("%d", &low[i]);

		while (high[i] > 40 || low[i] < -40 || high[i] < low[i]) {
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
			
			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &high[i]);
			
			printf("\nEnter the low value for day %d: ", i + 1);
			scanf("%d", &low[i]);
		}
	}

	for (int i = 0; i < NUMS; ++i) {
		mLow += low[i];
		if (i < NUMS && lowestTemp > low[i]) {
			lowestTemp = low[i];
			lowestDay = i+1;
		}

		mHigh += high[i];
		if (i < NUMS && highestTemp < high[i]) {
			highestTemp = high[i];
			highestDay = i+1;
		}
	}

	printf("\nThe average (mean) LOW temperature was: %.2lf\n", mLow/NUMS);

	printf("The average (mean) LOW temperature was: %.2lf\n", mHigh / NUMS);

	mtemp = mHigh + mLow;

	printf("The average (mean) LOW temperature was: %.2lf\n", mtemp/8);

	printf("The highest temperature was %d, on day %d\n", highestTemp, highestDay);

	printf("The lowest temperature was %d, on day %d\n", lowestTemp, lowestDay);

	

	return 0;
}
