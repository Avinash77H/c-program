#include <stdio.h>
int
main ()
{
  char ch;
  printf ("enter value of character:");
  scanf ("%c", &ch);

  if (ch >= 65 && ch <= 90)
    {
      printf (" uppercase is:%c", ch + 32);
    }
  else if (ch >= 97 && ch <= 122)
    {
      printf ("lowercase is %c", ch - 32);
    }

  return 0;
}
