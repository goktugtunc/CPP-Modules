PROGRAMNAME = zombie

SOURCES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = main.o newZombie.o randomChump.o Zombie.o

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