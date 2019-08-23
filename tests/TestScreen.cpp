#include "utils.h"
#include "tests.h"

static void	TestScreenBorder(void)
{
		PrintText("Hello World!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ");
		Sleep1();
		PrintText(" Testing screen border: ");
		Sleep2();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();
}

static void	TestNewLine(void)
{
		PutChar(' ');
		Sleep1();
		PutChar(' ');
		Sleep1();
		PutChar(' ');
		Sleep1();
		PrintText("Testing new line:");
		Sleep2();
		PutChar('\n');
		Sleep1();
		PutChar('1');
		Sleep1();
		PutChar('\n');
		Sleep1();
		PutChar('2');
		Sleep1();
		PutChar('\n');

}

static void	TestScreenScroll(void)
{
		PrintText("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ");
		Sleep2();
		PrintText("  Testing screen scroll: ");
		Sleep1();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();
		PutChar('A');
		Sleep1();

}

/*
 * 
 * TestScreen performs many tests:
 * -Checking screen border
 * -Checking new line
 * -Checking update of crs_x and crs_y
 * -Checking screen scroll when at bottom of screen
*/

void	TestScreen(void)
{
	char	str[] = "Hello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHello World!AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	ClrScreen();
	Sleep2();
	TestScreenBorder();
	Sleep1();
	TestNewLine();
	Sleep2();
	PrintText(str);
	Sleep2();
	TestScreenScroll();
	Sleep2();
	TestColors();
}
