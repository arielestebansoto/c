#include <stdio.h>

int main(){

	printf("cuenta las lineas de enntrada\n");

	int c, nl = 0;

	while((c = getchar()) != EOF)
		if(c == '\n') ++nl;

		printf("%d\n", nl);
	return  0;
}
