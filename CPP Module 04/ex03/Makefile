PROGRAMNAME = ex03

COMPILE = c++ -Wall -Werror -Wextra -std=c++98

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

OBJS = main.o AMateria.o Cure.o Ice.o Character.o MateriaSource.o

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(SRC)
	$(COMPILE) $(SRC) -o $(PROGRAMNAME)
	$(COMPILE) -c $(SRC)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(PROGRAMNAME)

re: fclean all