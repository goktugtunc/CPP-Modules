PROGRAMNAME = zombieHorde

SOURCES = main.cpp zombieHorde.cpp Zombie.cpp

OBJS = main.o zombieHorde.o Zombie.o

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