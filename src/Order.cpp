/*
 *	Copyright (C) 2009 by Miltiadis Allamanis
 *
 *	Permission is hereby granted, free of charge, to any person obtaining a copy
 *	of this software and associated documentation files (the "Software"), to deal
 *	in the Software without restriction, including without limitation the rights
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *	copies of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in
 *	all copies or substantial portions of the Software.
 *
 *	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *	THE SOFTWARE.
 */
#include "Order.h"

/**
 *  Represents a single order. This is the order's only instance in the program. The objects are referenced from here.
 */

/** 
 *  returns true if the order is a Buy order, false otherwise
 */
bool Order::isBuy()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-13-1-4137f8f2:129306551b9:-8000:000000000000123A begin
{
	return action == 'B';
}
// section -64--88-13-1-4137f8f2:129306551b9:-8000:000000000000123A end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void Order::display()
// section -64--88-1-100-12b48725:129324f236e:-8000:0000000000001295 begin
{
	printf("%08ld ", id);
	printf("%08ld ", timestamp);
	switch (type) {
	case 'M':
		printf("%c ", action);
		printf("Market (%4d)        ", vol);
		break;
	case 'L':
		printf("%c ", action);
		printf("Limit  (%4d,%5.1f) ", vol, (float) price1 / 10.0);
		break;
	case 'S':
		printf("%c ", action);
		printf("Stop   (%4d,%5.1f) ", vol, (float) price1 / 10.0);
		break;
	case 'T':
		printf("%c ", action);
		printf("StopLim(%4d,%5.1f,%5.1f) ", vol, (float) price1 / 10.0,
				(float) price2 / 10.0);
		break;
	case 'C':
		printf("* Cancel  %6ld        ", id);
		break;
	default:
		break;
	}
	printf("\n");
}
// section -64--88-1-100-12b48725:129324f236e:-8000:0000000000001295 end


