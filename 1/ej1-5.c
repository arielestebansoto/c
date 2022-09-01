#include <stdio.h>

int main(){

	int v = -1;


	if( (getchar() != EOF) == 0) {
		v = 0;
	} else if( (getchar() != 0) == 1) {
		v = 1;
	} else {
		printf("error\n");

		return 0;
	}

	printf("getchar() != EOF es: %d\n",v);

	return 0;
}
