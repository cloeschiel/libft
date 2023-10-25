NAME = libft

CC = gcc

CFLACS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_toupper.c \
      ft_tolower.c \

OBJ = ${SCR:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) $(OBJ) -O $(NAME)

CLEAN:

	rm -rf $(OBJ)

fclean: clean
	
	rm -rf $(NAME)

re: fclean all
