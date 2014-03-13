/*
 Author: Blake Burgess
 License: WTFPL (see http://wtfpl.net)
 Date: 2014-03-14
*/

/*
 Synopsis: removes spaces from input.
*/

/*
 Usage: $ ./strip-spaces <your-file >stripped-file
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int c;

	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
	}

	return EXIT_SUCCESS;
}
