#include <stdio.h>
#include <time.h>

int main(void)
{
	int birthYear;
	int currentYear;
	struct tm *currentDate;
	time_t now = time(NULL);

	currentDate = localtime(&now);
	if (currentDate == NULL) {
		fprintf(stderr, "Could not determine the current year\n");
		return 1;
	}

	currentYear = currentDate->tm_year + 1900;

	printf("Enter your birth year: ");
	if (scanf("%d", &birthYear) != 1) {
		fprintf(stderr, "Invalid input. Please enter a year as a number\n");
		return 1;
	}

	if (birthYear < 1 || birthYear > currentYear) {
		fprintf(stderr, "Invalid birth year. Enter a year between 1 and %d\n", currentYear);
		return 1;
	}

	printf("Your estimated age is %d\n", currentYear - birthYear);
	return 0;
}
