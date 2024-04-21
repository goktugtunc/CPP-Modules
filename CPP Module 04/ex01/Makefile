PROGRAMNAME = ex01

COMPILE = c++ -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJS = main.o Animal.o Dog.o Cat.o WrongCat.o WrongAnimal.o Brain.o

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(SRC)
	$(COMPILE) $(SRC) -o $(PROGRAMNAME)
	$(COMPILE) -c $(SRC)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(PROGRAMNAME)

re: fclean all