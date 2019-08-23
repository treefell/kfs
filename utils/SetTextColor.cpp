#include "utils.h"

/* 
 * Sets the background and foreground color 
 *
 * 0 = Black		8  Dark Grey
 * 1 = Blue		9  Light Blue
 * 2 = Green		10 Light Green
 * 3 = Cyan		11 Light Cyan
 * 4 = Red		12 Light Red
 * 5 = Magenta		13 Light Magenta
 * 6 = Brown		14 Yellow
 * 7 = Light Grey	15 White
 *
 * The 4 High Bits are for the background color
 * and the 4 Low Bits are for the foreground color
 * 
*/

void	SetTextColor(unsigned char backcolor, unsigned char forecolor)
{
	attrib = (backcolor << 4) | (forecolor & 0x0F);
}
