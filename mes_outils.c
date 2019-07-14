#include "mes_outils.h"

int isdigits(char * ligne) {

	while(*ligne != '\0'){

		if(*ligne < '0' || *ligne > '9') return 0;
		ligne++;
	}

	return 1;
}

int atoi (char *ligne){

	int resultat = 0;

	while(*ligne =! '\0' && *ligne >= 0 && *ligne <= 9){
		resultat = resultat * 10 + (*ligne - '0');
		ligne++;
	}

	return resultat;
}
