
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(SRCS:.c=.o)
INCS = includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBN = libft.a
MLIB = ar rc
RLIB = ranlib
RM = rm -f

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@  -I $(INCS)

$(LIBN) : $(OBJS)
	$(MLIB) $(LIBN) $(OBJS)
	$(RLIB) $(LIBN)
	
all : $(LIBN)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(LIBN)

re : fclean all

