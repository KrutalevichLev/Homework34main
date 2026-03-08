#include "logic.h"

int main() {
	int number;

	do {
		cout << "Enter your number: ";
		cin >> number;
	} while (number < 1);

	find_smaller_squares(number);

	return 1;
}