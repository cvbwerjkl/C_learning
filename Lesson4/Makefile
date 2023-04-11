WARNING = -Wall
IMPL =
SOURCES = main.c	

ifeq ($(IMPL),1)
	SOURCES += src/substring_count.c
else
	SOURCES += src/substring_count2.c
endif

all:		
	@gcc $(WARNING) -Iinc $(SOURCES) -o test
	@echo "Compiling done"

clean:
	@rm -f test
	@rm -f test2
	@echo "Cleaning done"