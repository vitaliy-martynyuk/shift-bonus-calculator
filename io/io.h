#ifndef IO_H
#define IO_H

#include <cstdint>
#include <iostream>
#include <cmath>

float getHours();
std::uint16_t getShift();
bool getQuota();

void printBonuses(float hoursh, std::uint16_t shift, bool quota);

#endif
