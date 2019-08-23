#ifndef UTILS_H
# define UTILS_H

#define VGA_TEXT_PMEM_ADDRESS	0xb8000
#define FRAME_BUFFER_SIZE	4000
extern int csr_x;
extern int csr_y;
extern int attrib;

void		SetTextColor(unsigned char backcolor, unsigned char forecolor);
void		Scroll(void);
void		*MemCpy(void *dst, const void *src, unsigned int n);
void		PutChar(unsigned char c);
unsigned char	inportb(unsigned int port);
void		outportb(unsigned int port, unsigned char value);
void		ClrScreen(void);
void		PrintText(const char *str);
unsigned int	StrLen(const char *str);
void		*memset(void *b, int c, unsigned int len);
int		StrCmp(const char *s1, const char *s2);
int		StrnCmp(const char *s1, const char *s2, unsigned int n);
void		MoveCsr(int x, int y);
void		Sleep1(void);
void		Sleep2(void);
#endif
