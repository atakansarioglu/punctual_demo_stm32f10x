/**
 * @file      board.c
 * @author    Atakan S.
 * @date      01/01/2018
 * @version   1.0
 * @brief     Board specific configurations, initializations.
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

#include <porty.h>

/**
 * @brief This is MCU/board-specific peripheral initializer.
 */
void Board_Init(void){
	SystemCoreClockUpdate();

	// Enable peripheral clocks.
	RCC_APB2PeriphClockCmd(
		  RCC_APB2Periph_AFIO
		| RCC_APB2Periph_GPIOA
		| RCC_APB2Periph_GPIOB
		| RCC_APB2Periph_GPIOC
		| RCC_APB2Periph_GPIOD
		| RCC_APB2Periph_GPIOE
		| RCC_APB2Periph_GPIOF
		| RCC_APB2Periph_GPIOG
	, ENABLE);

	// Output pins.
	mPinOutput(LED_Green);
	mPinOutput(LED_Blue);

	// Input pins.
	mPinInput(BUTTON_User);

	// ADC pins.
	//...
}
