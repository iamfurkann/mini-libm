NAME = minilibm.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	src/f_abs.c

OBJ = $(SRC:.c=.o)

INCLUDE = -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all