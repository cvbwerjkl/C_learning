WARNING = -Wall
IMPL =
SOURCES = main.c src/substring_search.c	

ifeq ($(IMPL),2)
	SOURCES += src/substring_count2.c
else
	SOURCES += src/substring_count.c
endif

all:		
	@gcc $(WARNING) -Iinc $(SOURCES) -o test
	@echo "Compiling done"

clean:
	@rm -f test
	@rm -f test2
	@echo "Cleaning done"