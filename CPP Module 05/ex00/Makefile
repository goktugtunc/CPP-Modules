PROGRAMNAME = ex00

CC = c++ -Wall -Werror -Wextra -std=c++98

SRCS = Bureaucrat.cpp main.cpp

OBJS = Bureaucrat.o main.o

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(SRCS)
	$(CC) $(SRCS) -o $(PROGRAMNAME)
	$(CC) -c $(SRCS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(PROGRAMNAME)

re: fclean all