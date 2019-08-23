GPP_PARAM	= -m32 -fno-builtin -fno-exceptions -fno-stack-protector -fno-rtti -nostdlib -nodefaultlibs

NAME		= keyboard

CXX		= g++

HEADER_DIR	= ./

HEADER_NAME	= keyboard.h

SRC_NAME	= Kb.cpp SetKeyCodes.cpp

OBJ_NAME	= $(SRC_NAME:.cpp=.o)

HEADERS		= $(addprefix $(HEADER_DIR), $(HEADER_NAME))

IFLAGS		= -I ./ -I ../../utils/

$(NAME): $(OBJ_NAME)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(GPP_PARAM) -o $@ -c $< $(IFLAGS)

clean:
	/bin/rm -rf $(OBJ_NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
