#include "io/io.h"
#include "helpers/helpers.h"
#include <iostream>
#include <cstdint>

int main()
{
	//float hours{ getWorkingHours() };
	//if (!isWorkingHoursValid(hours)) {
	//	std::cout << "Invalid working hours! 0.5 <= hours <= 12";

	//	return EXIT_FAILURE;
	//}

	//std::uint16_t shift{ getShift() };
	//if (!isShiftValid(shift)) {
	//	std::cout << "Invalid shift! 1 <= shift <= 4";

	//	return EXIT_FAILURE;
	//}

	//bool quota{ getQuota() };

	//printBonuses(hours, shift, quota);

	float x{ 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f };
	float y{ 1.0f };

	std::cout << x << " > " << y << " is " << compareFloats(x, y, ">") << '\n';
	std::cout << x << " < " << y << " is " << compareFloats(x, y, "<") << '\n';
	std::cout << x << " >= " << y << " is " << compareFloats(x, y, ">=") << '\n';
	std::cout << x << " <= " << y << " is " << compareFloats(x, y, "<=") << '\n';
	std::cout << x << " == " << y << " is " << compareFloats(x, y, "==") << '\n';
	std::cout << x << " != " << y << " is " << compareFloats(x, y, "!=") << '\n';

	return EXIT_SUCCESS;
}