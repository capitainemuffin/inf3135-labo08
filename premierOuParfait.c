#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int estPremier(int nombre){

	int max = sqrt(nombre) + 1;

	for (int i = 2; i <= max; i++){

		if( nombre % i == 0 ) return 0;

	}

	return 1;
}

int estParfait(int nombre){

	int max = sqrt(nombre);
	int somme = 1;

	for (int i = 2; i <= max; i++){

		if( nombre % i == 0 ) somme += i + ( nombre/i );

	}

	return nombre == somme;

}

int main (int argc, char** argv){

	if(strcmp(argv[1], "-p") == 0){

		for (int i = atoi(argv[2]); i <= atoi(argv[3]); i++){

			if (estParfait(i)) printf("%d\n", i);
		}

	} else {

		for (int i = atoi(argv[1]); i <= atoi(argv[2]); i++) {

			if (estPremier(i)) printf("%d\n", i);
		}

	}	

	return 0;

}