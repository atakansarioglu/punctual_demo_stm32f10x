/**
 * @file      main.c
 * @author    Atakan S.
 * @date      01/01/2018
 * @version   1.2
 * @brief     Porty project, MCU independent embedded code template.
 *
 * @copyright Copyright (c) 2018 Atakan SARIOGLU ~ www.atakansarioglu.com
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 */

#include "porty.h"

// Variables.
tPunctualItem *pHeartBeat;
tTimeout timeOut;
uint32_t counterValue;

// The main routine.
int main(void){
	// Init cpu.
	Board_Init();

	// Init Ticker.
	TickerInit();

	// Init the scheduler.
	PunctualInit();

	// Create HeartBeat task.
	pHeartBeat = PunctualCreate(heartBeat);

	// Set timeout.
	PunctualTimeoutSet(&timeOut, 2000);

	// Enable global interrupts.
	mIntEnable();

	// The main loop.
	while (true) {
		if (PunctualTimeoutCheck(&timeOut)) {
			// Send signal to the HeartBeat task.
			PunctualSend(pHeartBeat, (void *) true);

			// Read the task's counter value from main.
			counterValue = PunctualReceive(pHeartBeat);
			(void) counterValue; // (but unused).
		}
	}
}
