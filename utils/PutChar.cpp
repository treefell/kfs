#include "utils.h"

/*
 * Puts a character on the screen
*/

void	PutChar(unsigned char c)
{
	unsigned short	*pos;
	/* Handle backspace */
	if (c == 0x08 && csr_x != 0)
		csr_x--;
	/* Handle tab incrementing cursor's x position */
	else if (c == 0x09)
		csr_x = (csr_x + 8) & ~(8 - 1);
	/* Handle carriage return, bringin cursor bask to margin */
	else if (c == '\r')
		csr_x = 0;
	/* Handle new line */
	else if (c == '\n')
	{
		csr_x = 0;
		csr_y++;
	}
	/* Any character greater or equal to spqce is a printable character */
	else if (c >= ' ')
	{
		pos = (unsigned short *)VGA_TEXT_PMEM_ADDRESS + (csr_y * 80 + csr_x);
		*pos = (attrib << 8) | c;
		csr_x++;
	}
	if (csr_x >= 80)
	{
		csr_x = 0;
		csr_y++;
	}
	Scroll();
	MoveCsr(csr_x, csr_y);
}
