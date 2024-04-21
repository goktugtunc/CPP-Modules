NAME = phonebook

COMPILE = c++ -Wall -Werror -Wextra -std=c++98

SOURCES = main.cpp PhoneBook.cpp

all: $(NAME)

$(NAME):
	$(COMPILE) $(SOURCES) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all