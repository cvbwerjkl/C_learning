SOURCES1 = fifo/pop.c \
fifo/push.c \
fifo/isEmpty.c 

SOURCES2 = tree/free_tree.c \
tree/print_tree.c \
tree/add_left_leaf.c \
tree/add_right_leaf.c

SOURCES3 = tests/main.c

SOURCES4 = main.c

WARNING = -Wall
INC1 = fifo
INC2 = tree

all:		
	@gcc $(WARNING) -I$(INC1) -I$(INC2) $(SOURCES1) $(SOURCES2) $(SOURCES4) -o my_prog
	@echo "Compiling done"

test:		
	@gcc $(WARNING) -I$(INC1) -I$(INC2) $(SOURCES1) $(SOURCES2) $(SOURCES3) -o tests/test
	@echo "Compiling done"

clean:
	@rm -f tests/test
	@rm -f my_prog
	@echo "Cleaning done"
