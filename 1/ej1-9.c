#include <stdio.h>

int main() {
	printf("Programa que copia su entrada a la salida, reemplazando cada cadena de uno o mas blancos por un solo blanco\n");
	
	int c, p;
	
	while ( (c = getchar()) != EOF ){
		if (!(p == ' ' && c == ' ')) putchar(c);
		p = c;
		}
	return 0;
}
