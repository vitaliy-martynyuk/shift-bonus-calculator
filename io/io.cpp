#include "io.h"

float getHours()
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
	std::cout << "Hours worked: " << hours << '\n';
	std::cout << "Shift worked: " << shift << '\n';
	std::cout << "Quota: " << quota << '\n';
}