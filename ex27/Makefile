NAME = ft_display_file

FUNCTION = ft_display_file.c

OBJ = ft_display_file.o

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ)
	
$(OBJ): 
	gcc $(CFLAGS) -c $(FUNCTION)

clean:
	rm -f *.o 

fclean: clean
	rm -f $(NAME)

re: fclean all


