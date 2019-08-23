GPP_PARAM	= -m32 -fno-builtin -fno-exceptions -fno-stack-protector -fno-rtti -nostdlib -nodefaultlibs

NAME		= libutils.a

CXX		= g++

HEADER_DIR	= ./

HEADER_NAME	= utils.h

SRC_NAME	= StrLen.cpp memset.cpp StrCmp.cpp StrnCmp.cpp MoveCsr.cpp inportb.cpp outportb.cpp	\
		  ClrScreen.cpp PrintText.cpp PutChar.cpp MemCpy.cpp Scroll.cpp SetTextColor.cpp	\
		  Sleep1.cpp Sleep2.cpp

OBJ_NAME	= $(SRC_NAME:.cpp=.o)

HEADERS		= $(addprefix $(HEADER_DIR), $(HEADER_NAME))

IFLAGS		= -I ./

$(NAME): $(OBJ_NAME)
	ar rc $(NAME) $^
	ranlib $(NAME)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(GPP_PARAM) -o $@ -c $< $(IFLAGS)

clean:
	/bin/rm -rf $(OBJ_NAME)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
