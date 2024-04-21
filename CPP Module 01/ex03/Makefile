PROGRAMNAME = attack
	
SOURCES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = main.o HumanA.o HumanB.o Weapon.o

COMPILE = c++ -Wall -Werror -Wextra -std=c++98

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(SOURCES)
	$(COMPILE) $(SOURCES) -o $(PROGRAMNAME)
	$(COMPILE) -c $(SOURCES)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(PROGRAMNAME)

re:	fclean all