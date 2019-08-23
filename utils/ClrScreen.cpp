#include "utils.h"

/* 
 * This function clear the screen with char ' ' (0x20 in hex) and sets the cursor
 * at the begining of line setting csr_x and csr_y to 0
*/

void ClrScreen(void)
{
	unsigned short	*VidMem = (unsigned short *)VGA_TEXT_PMEM_ADDRESS;
	unsigned int	i = 0;

	while (i < 80 * 25)
	{
		VidMem[i] = (attrib << 8) | 0x20; //0x0F is black background & white foreground text color
		i++;
	}
	csr_x = 0;
	csr_y = 0;
	MoveCsr(0, 0);
}
