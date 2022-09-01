#include <stdio.h>

#define IN 1 /* en un palabra */
#define OUT 0 /* fuera de una palabra */

int main() {
	
	printf("cuenta lineas, palabras y caracteres de la entrada\n");
	
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	
	while((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') ++nl;
		if(c == "" || c == '\n' || c == '\t') state = OUT;
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}
	
	printf("nl: %d, nw: %d, nc: %d", nl, nw, nc);
	
	
	return 0;
}
