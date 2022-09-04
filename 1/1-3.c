#include <stdio.h>

int main(){
	printf("Imprime la tabla Fahrenheit-Celsius\n");
	
	int fahr;
	
	for(fahr = 0; fahr <= 300; fahr += 20)
		printf("%3d %6.1lf\n", fahr, (5.0 / 9.0) * (fahr-32.0));
	
	return 0;
}
