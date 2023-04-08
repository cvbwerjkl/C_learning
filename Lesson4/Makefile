WARNING = -Wall

all:		
	@gcc $(WARNING) -Iinc src/substring_count.c main.c -o test
	@echo "Compiling done"

#assembling with different realisation of substring_count function
option2:		
	@gcc $(WARNING) -Iinc src/substring_count2.c main.c -o test2
	@echo "Compiling done"

clean:
	@rm -f test
	@rm -f test2
	@echo "Cleaning done"