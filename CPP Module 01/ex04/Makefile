PROGRAMNAME = replace
	
SOURCES = main.cpp

OBJS = main.o

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