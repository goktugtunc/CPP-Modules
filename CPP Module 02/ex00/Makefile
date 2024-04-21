PROGRAMNAME = ex00

COMPILE = c++ -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Fixed.cpp

OBJS = main.o Fixed.o

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(SRCS)
	$(COMPILE) $(SRCS) -o $(PROGRAMNAME)
	$(COMPILE) -c $(SRCS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(PROGRAMNAME)

re: fclean all