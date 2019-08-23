#include "utils.h"
#include "tests.h"
#include "keyboard.h"

int csr_x, csr_y = 0;
int attrib = 0x0F;

extern "C" void kernelMain(void *multiboot_structure, unsigned int magic_number)//multiboot_struct can be taken from gnu project for ex
{
	TestScreen(); //Uncomment to allow testings
	ClrScreen();
	SetTextColor(0x0, 0x2);
	ClrScreen();
	PrintText(" ChuEth $>");
	Kb();
	while(1);
}
