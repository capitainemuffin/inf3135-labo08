#include "mes_outils.h"
#include "stdio.h"

void test_func(void){
	
}
int main(int argc, char ** argv){


	if(isdigits(argv[1])){
		printf("%s\n", "oui");
	} else {
		printf("%s\n", "non");
	}


	printf("%d\n", atoi(argv[1]));
	return 0;
}