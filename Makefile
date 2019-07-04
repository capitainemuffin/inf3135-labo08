options = -pedantic -Wall -std=c11 -lm

defautl : all 

all : premierOuParfait 

premierOuParfait : premierOuParfait.o 
	gcc -o premierOuParfait premierOuParfait.o $(options)

premierOuParfait.o : premierOuParfait.c
	gcc -c -o premierOuParfait.o premierOuParfait.c $(options)

clean :
	rm -fr *.o
	rm -f premierOuParfait

