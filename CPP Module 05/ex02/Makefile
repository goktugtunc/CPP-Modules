NAME = Bureaucrat

SRCS = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = Bureaucrat.o main.o AForm.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o

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