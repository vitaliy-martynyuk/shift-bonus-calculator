#include "io/io.h"
#include <iostream>
#include <cstdint>

int main()
{
	float hours{ getHours() };
	std::uint16_t shift{ getShift() };
	bool quota{ getQuota() };

	printBonuses(hours, shift, quota);

	return 0;
}