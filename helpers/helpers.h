#ifndef HELPERS_H
#define HELPERS_H

#include <string_view>
#include <cmath>
#include <algorithm>

bool compareFloats(float x, float y, std::string_view sign, float r_eps = 1e-5f);

#endif
