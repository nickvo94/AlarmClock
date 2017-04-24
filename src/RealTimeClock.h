/*
 * RealTimeClock.h
 *
 *  Created on: Dec 2, 2016
 *      Author: Nick
 */

#ifndef REALTIMECLOCK_H_
#define REALTIMECLOCK_H_

/**
* @brief Handle interrupt from SysTick timer
* @return Nothing
*/

class RealTimeClock {
	public:
		RealTimeClock();
		int GetTick();
		void Tick();
	private:
		volatile int tick;
		volatile int hour;
		volatile int min;
		volatile int sec;
};

#endif
