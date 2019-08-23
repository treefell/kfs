GPP_PARAM	= -m32 -fno-builtin -fno-exceptions -fno-stack-protector -fno-rtti -nostdlib -nodefaultlibs

NAME		= libmodules.a

CXX		= g++

MODULES		= keyboard

MODULES_DIR	= $(MODULES:=/)

SRC_NAME	= $(wildcard $(MODULES_DIR)*.cpp)

OBJ_NAME	= $(SRC_NAME:.cpp=.o)

IFLAGS		= -I ../utils/ $(addprefix -I, $(MODULES_DIR))

$(NAME): $(OBJ_NAME)
	ar rc $(NAME) $^
	ranlib $(NAME)

all: $(NAME)

%.o: %.cpp
	$(MAKE) $(notdir $@) --directory=$(dir $@)

clean:
	$(MAKE) clean --directory=$(MODULES_DIR)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re $(SRC_NAME)
