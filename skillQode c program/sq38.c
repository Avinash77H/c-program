#include <stdio.h>
int main ()
{
  char i;
  for (i = 'A'; i < 'Z';)
    {
      printf (" %c", i);
      i = i + 2;
      printf (" %c", i + 32);
      i = i + 2;


    }

  return 0;
}
