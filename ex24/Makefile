NAME = libft.a

SRC = ./srcs/

INCLUDE = ./includes/

FUNCTIONS = $(addprefix $(SRC), ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c\
	ft_strcmp.c)

OBJ = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(FUNCTIONS)
	gcc -Wall -Wextra -Werror -I $(INCLUDE) -c $(FUNCTIONS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all