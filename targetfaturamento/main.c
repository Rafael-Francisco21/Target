/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double faturamento[30], media = 0, maior, menor, valor[30];
    int dia = 1, n = 0, n_d = 0;
    
    valor[1] = 22174.1664;
	valor[2]= 24537.6698;
	valor[3]= 26139.6134;
	valor[4]= 0.0;
	valor[5]=0.0;
	valor[6]= 26742.6612;
	valor[7]= 0.0;
	valor[8]= 42889.2258;
	valor[9]= 46251.174;
	valor[10]= 11191.4722;
	valor[11]= 0.0;
	valor[12]= 0.0;
	valor[13]= 3847.4823;
	valor[14]= 373.7838;
	valor[15]= 2659.7563;
	valor[16]= 48924.2448;
	valor[17]= 18419.2614;
	valor[18]= 0.0;
	valor[19]= 0.0;
	valor[20]= 35240.1826;
	valor[21]= 43829.1667;
	valor[22]= 18235.6852;
	valor[23]= 4355.0662;
	valor[24]= 13327.1025;
	valor[25]= 0.0;
	valor[26]= 0.0;
	valor[27]= 25681.8318;
	valor[28]= 1718.1221;
	valor[29]= 13220.495;
	valor[30]= 8414.61;
	
	while (n <= 30)
    {
        if (valor[n] > 0.0){
            menor = valor[n];
            maior = valor[n];
            n = 31;
        }   
        n++;
    }
    n = 0;
    
    while (dia <= 30)
    {
        if (valor[dia] > 0.0){
            faturamento[n] = valor[dia];
            if (faturamento[n] > maior){
                maior = faturamento[n] ;
            }
            if (faturamento[n] < menor){
                menor = faturamento[n] ;
            }
            media = media + faturamento[n];
            n++;
        }   
        dia++;
    }
    media = media / n;
    n = 0;
    while (faturamento[n] > 0.0)
    {
        if (faturamento[n] > media){
            n_d++;
        }   
        n++;
    }
    printf("O menor faturamentoi foi %f\nO maior foi %f\nO número de dias que o valor de faturamento foi superior à média mensal é de %i dias", menor, maior, n_d);

    return 0;
}
