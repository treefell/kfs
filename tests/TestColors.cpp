#include "utils.h"
#include "tests.h"

/*
 * This function does may tests of foreground
 * and background colors, the colors are set
 * with SetTextColor. First param is for the
 * background color, second is for foreground
 * color.
*/

void	TestColors(void)
{
		SetTextColor(0xF, 0x0);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x1);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x2);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x3);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x4);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x5);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x6);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x7);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x8);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0x9);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0xA);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0xB);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0xC);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0xD);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0xE);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x0, 0xF);
		PrintText("Testing color");
		Sleep1();


		SetTextColor(0x1, 0xE);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x2, 0xD);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x3, 0xC);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x4, 0xB);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x5, 0xA);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x6, 0x9);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x7, 0x8);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x8, 0x7);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x9, 0x6);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xA, 0x5);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xB, 0x4);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xC, 0x3);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xD, 0x2);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xE, 0x1);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xF, 0x0);
		PrintText("Testing color");
		Sleep1();

		SetTextColor(0x1, 0x2);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xB, 0x5);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xE, 0x3);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x7, 0x9);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0x4, 0xE);
		PrintText("Testing color");
		Sleep1();
		SetTextColor(0xD, 0x6);
		PrintText("Testing color");
		Sleep1();

}
