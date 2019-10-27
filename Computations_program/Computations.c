#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double amount = 0.00;
	const double GST = 7.68;
	double tax = 0.00;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	
	tax = amount / GST;
	printf("GST: %.2lf\n", tax);

	amount += tax;
	printf("Balance owing: $%.2lf\n", amount);

	int loonies = 0;
	double balance = 0.00;
	int quarters = 0;
	double owing = 0.00;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;

	loonies = (int)amount/1; // because amount type is "double", conversion is better into int
	owing = amount - (double)loonies;

	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, owing);

	quarters = (owing * 100)/25; // will not convert owning type from double to int...because if we do that it will not give required value
	owing = ((owing * 100) - ((double)quarters*25)) / 100;

	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, owing);

	dimes = (owing * 100) / 10;
	owing = ((owing * 100) - ((double)dimes * 25)) / 100;
	printf("Dimes required: %d, balance owing $%.2lf\n", dimes, owing);

	nickels = (owing * 100) / 5;
	owing = ((owing * 100) - ((double)nickels * 5)) / 100;
	printf("Nickels required: %d, balance owing $%.2lf\n", nickels, owing);

	pennies = (owing * 100) / 1;
	owing = ((owing * 100) - ((double)pennies * 1)) / 100;
	printf("Pennies required: %d, balance owing $%.2lf\n", pennies, owing);

	return 0;
}