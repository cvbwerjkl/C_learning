WARNING = -Wall
CFLAGS = $(WARNING) -c -O3 -DADD_
LIB = lib/cblas_LINUX.a lib/blas_LINUX.a

all:		
	@gcc $(CFLAGS) -Iinc main.c -o obj/main.o
	@gfortran -o test obj/main.o $(LIB)
	@echo "Compiling done"

clean:
	@rm -f obj/*.o test
	@echo "Cleaning done"
