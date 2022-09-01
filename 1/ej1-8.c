#include <stdio.h>

int main(){

	printf("cuenta las lineas de enntrada\n");

	int c, ws = 0, t = 0, nl = 0;

	while((c = getchar()) != EOF){
		if(c == '\n') ++nl;
		if(c == '\t') ++t;
		if(c == ' ') ++ws;
	}
		printf("nl: %d\n, tb: %d, ws: %d", nl, t, ws);
	return  0;
}
