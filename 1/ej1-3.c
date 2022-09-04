#include <stdio.h>

int main() {
	printf("Imprime la tabla Fahrenheit-Celsius\n");
	printf("version punto flotante\n");
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; // limite superior de la tabla de temperaturas
	upper = 300; //limite superior
	step = 20; //tamanio del incremento
	
	fahr = lower;
	
	printf("fahrenheit\tcelsius\n");
	
	while( fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%10.0f\t%7.1f \n", fahr, celsius);
		fahr += step;
	}
	
	return 0;
}
