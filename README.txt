# Useful SOURCES
# http://www.brokenthorn.com/Resources/
# https://wiki.osdev.org/

# Linker SOURCES
# https://www.c-sharpcorner.com/article/create-your-own-kernel/
# https://www.youtube.com/watch?v=4hJDOvwbTZs

# Printing to screen SOURCES:
# http://www.osdever.net/bkerndev/Docs/printing.htm
# https://wiki.osdev.org/Printing_To_Screen
# http://www.brokenthorn.com/Resources/OSDev10.html
# https://wiki.osdev.org/Text_UI

# I/O SOURCES:
# https://www.osdev.org/howtos/2/

# KEYBOARD SOURCES :
# http://www.brokenthorn.com/Resources/OSDev19.html



####  COMPILING PROJECT  #####

# In order to compile do make
# This cmd will use vnc on port 5900 (for port 5901 use :1 etc..)
# The -s is shortcut for -gdb tcp::1234, it opens a gdbserver on port 1234

qemu-system-i386 -s -kernel kfs_1.bin -vnc :0

# In order to get the iso file do make iso
# A kfs_1.iso will be created and can be lauched either by VM or qemu
# On a VM just configure a new linux machine and put the iso

# With qemu use the following cmd:
qemu-system-i386 -s -cdrom kfs_1.iso -vnc :0
