#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		// char promoted to int. putchar takes in an int as argu.
		// When randchar returns value, it's promoted to an int. Print out char represented by that integer
		putchar( randchar() );
	putchar('\n');

	return(0);
}
