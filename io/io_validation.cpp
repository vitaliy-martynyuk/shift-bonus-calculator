#include "io_validation.h"
#include "../helpers/helpers.h"

bool isWorkingHoursValid(float hours)
{
	return compareFloats(hours, 0.5f, ">=") && compareFloats(hours, 12.0f, "<=");
}

bool isShiftValid(std::uint16_t shift)
{
	return (shift >= 1) && (shift <= 4);
}