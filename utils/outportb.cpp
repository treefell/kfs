/* Output a byte to a port */
/* July 6, 2001 added space between :: to make code compatible with gpp */

void outportb(unsigned int port,unsigned char value)
{
   asm volatile ("outb %%al,%%dx": :"d" (port), "a" (value));
}
