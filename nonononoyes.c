#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <libgen.h>

int main(int argc, char **argv)
{
	char *nm, *p;

	srand(time(NULL));
	p = nm = basename(argv[0]);	
	while (1) {
		if (!strncmp(p, "yes", 3)) {
			puts("y");
			p += 3;
		} else if (!strncmp(p, "no", 2)) {
			puts("n");
			p += 2;
		} else if (!strncmp(p, "maybe", 5)) {
			puts((rand() & 1) ? "y" : "n");
			p += 5;
		} else {
			fprintf(stderr, "invalid program name\n");
			return 1;
		}

		if (!*p)
			p = nm;
	}
}
