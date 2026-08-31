#ifndef IO_H
#define IO_H

#include "io_validation.h"
#include <cstdint>
#include <iostream>

float getWorkingHours();
std::uint16_t getShift();
bool getQuota();

void printBonuses(float hours, std::uint16_t shift, bool quota);

#endif
