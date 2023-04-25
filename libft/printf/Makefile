NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_puthex \
		ft_putnbr \
		ft_putstr \
		ft_printf \
		ft_putcharcount \
		ft_putuphex \
		ft_putpoint \
		ft_putunbr \
		ft_strlen \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

%.o: %.c Makefile ft_printf.h
	$(CC) $(CFLAGS) -I ft_printf.h -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re