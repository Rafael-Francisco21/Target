/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double total,est[4];
    int n = 0;
    est[0] = 67836.43;
    est[1] = 36678.66;
    est[2] = 29229.88;
    est[3] = 27165.48;
    est[4] = 19849.53;
    total = est[0] + est[1] + est[2] + est[3] + est[4];
    while (n<=4)
    {
        est[n] = (est[n]*100)/total;  
        n++;
    }

    printf("SP – %f%% RJ – %f%% MG – %f%% ES – %f%% Outros – %f%%",est[0], est[1], est[2], est[3], est[4]);

    return 0;
}
