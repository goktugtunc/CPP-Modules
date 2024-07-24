NAME = Bureaucrat

SRCS = Bureaucrat.cpp main.cpp Form.cpp

OBJS = Bureaucrat.o main.o Form.o

COMPILE = c++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(COMPILE) -c $(SRCS)
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all