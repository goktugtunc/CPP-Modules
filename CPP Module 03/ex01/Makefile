PROGRAMNAME = ScavTrap

COMPILE = c++ -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = main.o ClapTrap.o ScavTrap.o

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(SRCS)
	$(COMPILE) $(SRCS) -o $(PROGRAMNAME)
	$(COMPILE) -c $(SRCS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(PROGRAMNAME)

re: fclean all
