/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int
main ()
{
  char str[10], str_rev[10];
  int n = 0, i = 10;
  printf ("Insira uma paralvra ");
  scanf ("%s", str);
  while (n < 10)
    {
      while (str[i] == 0)
	  {
	    i--;
	  }
      str_rev[n] = str[i];
      n++;
      if (i > 0){
        i--;  
      }else
      {
          n = 10;
      }
    }
  printf ("%s", str_rev);

  return 0;
}
