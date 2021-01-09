CC = gcc 
CFLAGS = -Wextra -Werror -Wall 
NAME = libftprintf.a

SRCS = \
		ft_printf.c			\
		ft_option.c			\
		ft_print_check.c	\
		ft_print_utils.c	\
		ft_print_bx.c		\
		ft_print_c.c		\
		ft_print_d.c		\
		ft_print_i.c		\
		ft_print_p.c		\
		ft_print_per.c		\
		ft_print_s.c		\
		ft_print_u.c		\
		ft_print_x.c		\
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 