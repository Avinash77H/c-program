#include <stdio.h>
int
main ()
{
  int a, b, c;			// using of nested if
  printf ("enter value of a:");
  scanf ("%d", &a);
  printf ("enter value of b:");
  scanf ("%d", &b);
  printf ("enter value of c:");
  scanf ("%d", &c);

  if (a < c && a < c)
    {
      printf ("c is largest:%d", c);
      if (a < b && c < b)
	printf ("b is largest:%d", b);
    }
  else
    {
      printf ("a is largest:%d", a);
    }

  return 0;
}
