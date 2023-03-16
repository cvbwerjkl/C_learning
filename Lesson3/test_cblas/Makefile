main:		
	gcc -c -O3 -DADD_ -Iinc main.c
	gfortran -o test main.o lib/cblas_LINUX.a lib/blas_LINUX.a

cleanall:
	rm -f *.o test
