/*
 Author: Blake Burgess
 License: WTFPL (see http://wtfpl.net)
 Date: 2014-03-14
*/

/*
 Synopsis: removes newlines AND CARRIAGE RETURNS from input.
 (People often mix the two interchangeably (and the major
 O/S all do it differently...))
*/

/*
 Usage: $ ./strip-newlines <your-file >stripped-file
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int c;

	while ((c = getchar()) != EOF) {
		if (c != '\n' && c != '\r')
			putchar(c);
	}

	return EXIT_SUCCESS;
}
