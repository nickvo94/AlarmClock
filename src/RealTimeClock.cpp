/*
 * RealTimeClock.cpp
 *
 *  Created on: Dec 2, 2016
 *      Author: Nick
 */

#include "RealTimeClock.h"
#ifndef REALTIMECLOCK_H
#define REALTIMECLOCK_H

void RealTimeClock::Tick() {
	tick++;
}

int RealTimeClock::GetTick() {
	return tick;
}

RealTimeClock::RealTimeClock(void) {
	tick = 0;
}

#endif
