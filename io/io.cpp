#include "io.h"
#include "../helpers/helpers.h"

float getWorkingHours()
{
	std::cout << "Enter hours worked: ";
	float input{};
	std::cin >> input;

	return input;
}

std::uint16_t getShift()
{
	std::cout << "Enter shift worked: ";
	std::uint16_t input{};
	std::cin >> input;

	return input;
}

bool getQuota()
{
	std::cout << "Do you have quota(y/n)?: ";
	char input{};
	std::cin >> input;

	return input == 'y';
}

void printBonuses(float hours, std::uint16_t shift, bool quota)
{
	if ((compareFloats(hours, 8.0f, ">=") && (shift % 2 != 0))
		|| ((compareFloats(hours, 6.0f, ">=") && quota)))
		std::cout << "Bonus: Full\n";
	else if (compareFloats(hours, 4.0f, ">="))
		std::cout << "Bonus: Half\n";
	else
		std::cout << "Bonus: None\n";

	if (compareFloats(hours, 8.0f, "=="))
		std::cout << "Payroll flag: Yes\n";
	else
		std::cout << "Payroll flag: No\n";
}