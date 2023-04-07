/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N = 0, N_ANT1= 1, N_ANT2= 0, X;
    printf("Insira o número a ser verificado ");
    scanf("%d", &X);
    
    while (X > N)
    {
        N = N_ANT1 + N_ANT2;
        N_ANT2 = N_ANT1;
        N_ANT1 = N;
    }
    if (X==N){
        printf("O número %d pertence a sequencia", X);    
    }else{
        printf("O número %d não pertence  a sequencia", X);        
    }

    return 0;
}
