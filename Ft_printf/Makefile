NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_utils.c 
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		ar -rc $(NAME) $(OBJS)

clean :
		rm -fr $(OBJS)

fclean : clean
		rm -fr $(NAME)

re : fclean all