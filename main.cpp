#include "io/io.h"
#include <iostream>
#include <cstdint>

int main()
{
	float hours{ getWorkingHours() };
	if (!isWorkingHoursValid(hours)) {
		std::cout << "Invalid working hours! 0.5 <= hours <= 12";

		return EXIT_FAILURE;
	}

	std::uint16_t shift{ getShift() };
	if (!isShiftValid(shift)) {
		std::cout << "Invalid shift! 1 <= shift <= 4";

		return EXIT_FAILURE;
	}

	bool quota{ getQuota() };

	printBonuses(hours, shift, quota);

	return EXIT_SUCCESS;
}