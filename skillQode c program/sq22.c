#include <stdio.h>
int
main ()
{
  int a;			
  printf ("enter value of a:");
  scanf ("%d", &a);
  

  if (a < 0)
    {
      printf ("value in negative:%d", a);
      if (a > 0)
	printf ("value is positive:%d", a);
    }
  else
    {
      printf ("value is zero:%d", a);
    }

  return 0;
}
