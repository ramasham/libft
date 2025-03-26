include include.mk

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I./include

OBJS = $(SRS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $?

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re