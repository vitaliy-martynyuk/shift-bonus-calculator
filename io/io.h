#ifndef IO_H
#define IO_H

#include <cstdint>
#include <iostream>

float getHours();
std::uint16_t getShift();
bool getQuota();

void printBonuses(float hours, std::uint16_t shift, bool quota);

#endif
