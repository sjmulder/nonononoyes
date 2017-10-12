#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <libgen.h>

int main(int argc, char **argv)
{
	char *nm, *p;

	srand(time(NULL));
	p = nm = basename(argv[0]);	
	while (1) {
		if (*p == 'y' && *(++p) == 'e' && *(++p) == 's')
			puts("y");
		else if (*p == 'n' && *(++p) == 'o')
			puts("n");
		else if (*p == 'm' && *(++p) == 'a' && *(++p) == 'y' &&
				*(++p) == 'b' && *(++p) == 'e')
			puts((rand() & 1) ? "y" : "n");
		else
			goto invalid;

		if (!*(++p))
			p = nm;
	}

invalid:
	fprintf(stderr, "invalid program name\n");
	return 1;
}
