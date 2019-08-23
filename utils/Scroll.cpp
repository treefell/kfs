#include "utils.h"


/*
 * Scrolls the screen when we reach the bottom of the screen
*/

void	Scroll(void)
{
	unsigned int	i = 0;
	unsigned int	tmp;
	unsigned short	*VidMem = (unsigned short *)VGA_TEXT_PMEM_ADDRESS;
	unsigned short	*tmp2 = VidMem + (24 * 80); //Address of the last line

	if (csr_y >= 25)
	{
		tmp = csr_y - 25 + 1;
		MemCpy(VidMem, VidMem + tmp * 80, (25 - tmp) * 80 * 2);
		while (i < 80)
		{
			tmp2[i] = 0x0F20;
			i++;
		}
		csr_y = 25 - 1;
	}
}
