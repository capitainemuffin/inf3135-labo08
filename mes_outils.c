#include "mes_outils.h"

int isdigits(char * ligne) {

	while(*ligne != '\0'){

		if(*ligne < '0' || *ligne > '9') return 0;
		ligne++
	}

	return 1;
}

int atoi(char *){


}
