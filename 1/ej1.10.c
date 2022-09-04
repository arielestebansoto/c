#include <stdio.h>

int main() {
	printf("Programa que copia la entrada a la salida, reemplaza la tabulacion por \\t, retroceso por \\b y cada diagional invertida por \\ \n");
	int c;
	
	while( (c = getchar()) != EOF) {
		if(c == '\t') 
			printf("\\t\n");
		else if(c == '\b')  // que es un retroceso
			printf("\\b\n");
		else if(c == '\\') 
			printf("\\\\\n");
		else {
		printf("%c", c);	
		}
	}
	
	return 0;
}
