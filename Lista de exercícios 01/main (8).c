/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int x, y;
    char menu;
    
    printf("1 - Soma de dois números\n");
    printf("2 - Diferença entre 2 números (maior pelo menor)\n");
    printf("3 - Produto entre 2 números\n");
    printf("4 - Divisão entre 2 números (o denominador não pode ser zero)\n");
    printf("Opção:");
    
    scanf("%c", &menu);
    
    scanf("%i", &x);
    scanf("%i", &y);
    
    switch (menu){
        case '1':
            int soma = x + y;
            printf("Soma: %i", soma);
            break;
        case '2':
            int dif;
            if(x > y){
                dif = x - y;
                printf("Diferença: %i", dif);
            }
            else if(y > x){
                dif = y - x;
                printf("Diferença: %i", dif);
            }
            else{
                printf("Diferença: 0");
            }
            break;
        case '3':
            int prod = x * y;
            printf("Produto: %i", prod);
            break;
        case '4':
            double divi;
            if(x > y){
                divi = x / y;
                printf("Divisão: %f", divi);
            }
            else if(y > x){
                divi = y / x;
                printf("Divisão: %f", divi);
            }
            else{
                printf("Divisão: 1");
            }
            break;
        default:
            printf("Escolha um opção válida");
    }

    return 0;
}