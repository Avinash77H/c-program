#include <stdio.h>
int
main ()
{
  char ch;			
  printf ("enter value of character:");
  scanf ("%c", &ch);
  

  if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
      printf ("nowel character:%c", ch);
     
    }
  else
    {
      printf ("consonant character:%c", ch);
    }

  return 0;
}
