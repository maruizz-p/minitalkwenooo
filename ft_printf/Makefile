NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

CLEAN = rm -Rf

LIB = ar rcs

SRC = ft_printf.c\
ft_putchar.c\
ft_strlen_printf.c\
ft_putstr.c\
ft_printhexa.c\
ft_printdec.c\
ft_printptr.c\
ft_unsigned.c\

OBJS := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(LIB) $(NAME) $(OBJS)

clean:
	@$(CLEAN) $(OBJS)

fclean: clean
	@$(CLEAN) $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus

	 ▄▀▀█▄   ▄▀▀▄ █  ▄▀▀▄ █  ▄▀▀▄ ▄▀▀▄ 
	▐ ▄▀ ▀▄ █  █ ▄▀ █  █ ▄▀ █   █    █ 
	  █▄▄▄█ ▐  █▀▄  ▐  █▀▄  ▐  █    █  
	 ▄▀   █   █   █   █   █   █    █   
	█   ▄▀  ▄▀   █  ▄▀   █     ▀▄▄▄▄▀  
	▐   ▐   █    ▐  █    ▐             
	        ▐       ▐                  