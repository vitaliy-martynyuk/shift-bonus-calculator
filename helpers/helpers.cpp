#include "helpers.h"

bool compareFloats(float x, float y, std::string_view sign, float r_eps)
{
	constexpr std::string_view greater{ ">" };
	constexpr std::string_view less{ "<" };
	constexpr std::string_view greaterOrEqual{ ">=" };
	constexpr std::string_view lessOrEqual{ "<=" };
	constexpr std::string_view equal{ "==" };
	constexpr std::string_view notEqual{ "!=" };

	if (sign == greater)
		return (x - y) > r_eps * std::max(std::fabs(x), std::fabs(x));
	if (sign == less)
		return (y - x) > r_eps * std::max(std::fabs(x), std::fabs(x));
	if (sign == greaterOrEqual)
		return (x - y) >= -(r_eps * std::max(std::fabs(x), std::fabs(x)));
	if (sign == lessOrEqual)
		return (y - x) >= -(r_eps * std::max(std::fabs(x), std::fabs(x)));
	if (sign == equal)
		return std::fabs(x - y) <= r_eps * std::max(std::fabs(x), std::fabs(x));
	if (sign == notEqual)
		return std::fabs(x - y) > r_eps * std::max(std::fabs(x), std::fabs(x));

	return false;
}