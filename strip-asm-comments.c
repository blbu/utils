/*
 Author: Blake Burgess
 License: WTFPL (see http://wtfpl.net)
 Date: 2014-03-14
*/

/*
 Synopsis: tries to strip comments from assembly listings by ignoring
 characters after the first semi-colon on each line (including the ;)
*/

/*
 Usage: $ strip-asm-comments <your-file.asm >stripped-file.asm
 (you should go find out what "pipes are)
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char c;
	int in_comment = 0;

	while ((c = getchar()) != EOF) {
		if (c == ';')
			in_comment = 1;

		if (c == '\n' || c == '\r')
			in_comment = 0;

		if (!in_comment)
			putchar(c);
	}

	return EXIT_SUCCESS;
}
