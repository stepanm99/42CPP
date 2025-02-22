NAME = claptrap

SRC = main.cpp ClapTrap.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking $@"
	@$(CC) $(OBJ) $(FLAGS) -o $(NAME)
	@echo "Done!"

%.o: %.c
	@echo "Compiling $<"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
