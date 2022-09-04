#include <stdio.h>

int main() {
	printf("Verificar que la expresion getchar() != EOF es 0 o 1\n");
	
	if( (getchar() != EOF ) == 1) 
		printf("getchar() != EOF es: 1");
	else if((getchar() != EOF) == 0) 
		printf("getchar() != EOF es: 0");
	
	return 0;
}
