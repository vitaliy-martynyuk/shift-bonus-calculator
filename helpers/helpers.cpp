#include "helpers.h"

bool compareFloats(float x, float y, std::string_view sign, float rEps)
{
	constexpr std::string_view greater{ ">" };
	constexpr std::string_view less{ "<" };
	constexpr std::string_view greaterOrEqual{ ">=" };
	constexpr std::string_view lessOrEqual{ "<=" };
	constexpr std::string_view equal{ "==" };
	constexpr std::string_view notEqual{ "!=" };

	if (sign == greater)
		return (x - y) > rEps * std::max(std::fabs(x), std::fabs(y));
	if (sign == less)
		return (y - x) > rEps * std::max(std::fabs(x), std::fabs(y));
	if (sign == greaterOrEqual)
		return (x - y) >= -(rEps * std::max(std::fabs(x), std::fabs(y)));
	if (sign == lessOrEqual)
		return (y - x) >= -(rEps * std::max(std::fabs(x), std::fabs(y)));
	if (sign == equal)
		return std::fabs(x - y) <= rEps * std::max(std::fabs(x), std::fabs(y));
	if (sign == notEqual)
		return std::fabs(x - y) > rEps * std::max(std::fabs(x), std::fabs(y));

	return false;
}