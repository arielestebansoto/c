#include <stdio.h>

int main() {
	printf("Imprime la tabla Celsius-Fahrenheit\n");
	printf("version punto flotante\n");
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -40; // limite superior de la tabla de temperaturas
	upper = 250; //limite superior
	step = 20; //tamanio del incremento
	
	celsius = lower;
	
	printf("celsius\tfahrenheit\n");
	
	while( celsius <= upper) {
		fahr = celsius / (5.0 / 9.0) + 32.0;
		printf("%7.0f\t%10.1f \n", celsius, fahr);
		celsius += step;
	}
	
	return 0;
}
