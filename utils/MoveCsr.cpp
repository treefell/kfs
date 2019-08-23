#include "utils.h"

void MoveCsr(int x, int y)//a revoir car il ne bouge pas le csr au bon endroit
{
    unsigned temp;

    /*
    * The equation for finding the index in a linear
    * chunk of memory can be represented by:
    * Index = [(y * width) + x]
    */
    temp = y * 80 + x;

    /* This sends a command to indicies 14 and 15 in the
    *  CRT Control Register of the VGA controller. These
    *  are the high and low bytes of the index that show
    *  where the hardware cursor is to be 'blinking'. To
    *  learn more, you should look up some VGA specific
    *  programming documents. A great start to graphics:
    *  http://www.brackeen.com/home/vga */
    outportb(0x3D4, 14);
    outportb(0x3D5, temp >> 8);
    outportb(0x3D4, 15);
    outportb(0x3D5, temp);
}
