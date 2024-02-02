#include <stdio.h>

int
main ()
{
  float x = 0.5, y = 0.5, i;

  for (i = 1; i <= 15; i++)
    {
      printf (" %.1f", x);
      x = x + y;
      y = y + 1;
    }

  return 0;
}