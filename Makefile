VERSION		= 1

NAME		= kfs_$(VERSION).bin

ISO_NAME	= kfs_$(VERSION).iso

GPP_PARAMS	= -m32 -fno-builtin -fno-exceptions -fno-stack-protector -fno-rtti -nostdlib -nodefaultlibs

AS_PARAMS	= -f elf #elf is short for elf32

CXX		= g++

OBJ		= loader.o kernel.o

LIBS		= utils tests

MODULES		= keyboard

MODULES_PATH	= modules/

ALL_LIBS	= $(LIBS) $(MODULES_PATH)

MODULES_NAME	= $(addprefix lib, $(MODULES:=.a))

LIBS_PATH	= $(LIBS:=/)

LIBS_NAME	= $(addprefix lib, $(LIBS:=.a))

LIBS_FULL_PATH	= $(join $(LIBS_PATH), $(LIBS_NAME)) $(addprefix $(MODULES_PATH), $(MODULES_NAME))

MAKEFILE_DIRS	= $(LIBS_PATH) $(MODULES_PATH) #add module paths when implemented

I_FLAGS		= -I ./utils -I ./tests -I ./modules/keyboard

LD_FLAGS	= -melf_i386

L_FLAGS		= -L tests -ltests -L modules -lmodules -L utils -lutils

$(NAME): linker.ld $(OBJ) $(ALL_LIBS)
	ld $(LD_FLAGS) $(I_FLAGS) -T $< $(OBJ) $(L_FLAGS) -o $@

all: linker.ld $(OBJ)
	for d in $(MAKEFILE_DIRS);		\
	do					\
		$(MAKE) --directory=$$d re;	\
	done
	ld $(LD_FLAGS) $(I_FLAGS) -T $< $(OBJ) $(L_FLAGS) -o $(NAME)

$(ALL_LIBS): $(LIBS_FULL_PATH)
	$(MAKE) --directory=$@

%.o: %.cpp
	$(CXX) $(GPP_PARAMS) $(I_FLAGS) -o $@ -c $<

%.o: %.s
	nasm $(AS_PARAMS) $< -o $@

iso: $(NAME)
	mkdir -p isodir/boot/grub 2>/dev/null
	cp $(NAME) isodir/boot/$(NAME)
	echo -e "### BEGIN KFS ####\n\nmenuentry 'KFS_$(VERSION)' {\n\tmultiboot /boot/$(NAME)\n}\n### END KFS ###" > isodir/boot/grub/grub.cfg
	grub-mkrescue -o $(ISO_NAME) isodir

clean:
	rm -rf $(OBJ)
	rm -rf isodir

cleanall: clean
	for d in $(MAKEFILE_DIRS);		\
	do					\
		$(MAKE) --directory=$$d clean;	\
	done

fclean: clean
	rm -rf $(NAME)
	rm -rf $(ISO_NAME)

fcleanall: fclean
	for d in $(MAKEFILE_DIRS);		\
	do					\
		$(MAKE) --directory=$$d fclean;	\
	done

re: fcleanall all

.PHONY: all install clean cleanall fclean fcleanall re $(LIBS_FULL_PATH)
