#include <stdio.h>

unsigned char n;

void main(void)
{
	unsigned char a;
	
	a = 0;
	n = 0;
	
	while(1) {
		for (n=0; n<5; n++) {
			a = n + 2;
			printf("a = %d\n", a);
		}
	}
}