/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int INDICE = 13, SOMA = 0, K = 0;
  while( K < INDICE)
  {
    K = K + 1;
    SOMA = SOMA + K;
  }
  printf ("%d", SOMA);

  return 0;
}
