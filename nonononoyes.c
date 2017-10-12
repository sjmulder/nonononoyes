#include <stdio.h>
#include <libgen.h>
#include <string.h>

int main(int argc, char **argv)
{
  char *nm, *p;

  p = nm = basename(argv[0]);  
  while (1)
    {
      if (!*p)
        p = nm;
      if (!strncmp(p, "yes", 3))
        {
          puts("y");
          p += 3;
        }
      else if (!strncmp(p, "no", 2))
        {
          puts("n");
          p += 2;
        }
      else
        {
          fprintf(stderr, "invalid program name\n");
          return 1;
        }
    }

  return 0;
}
