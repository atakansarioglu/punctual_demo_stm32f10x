/**
 * @file      board.h
 * @author    Atakan S.
 * @date      01/01/2018
 * @version   1.1
 * @brief     Board specific configurations, i/o names, hardware assignments.
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

#ifndef _H_BOARD
#define _H_BOARD

// IRQ priorities (HIGHEST 0..15 LOWEST).
#define IRQPRIORITY_TIM4		1

// Pin definitions.
#define LED_Green				GPIOC,9// Discovery board.
#define LED_Blue				GPIOC,8// Discovery board.
#define BUTTON_User				GPIOA,0// Discovery board.

// Pin settings.
#define LED_Green_ON			1// Discovery board.
#define LED_Blue_ON				1// Discovery board.

// EXTI Settings.


// Macros.


// Prototypes.
void Board_Init(void);

#endif
