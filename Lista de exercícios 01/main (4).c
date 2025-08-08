/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, ant, sus;
    
    scanf("%i", &n);
    
    ant = n + 1;
    sus = n - 1;
    
    printf("Antecessor de %i: %i\n", n, ant);
    
    printf("Antecessor de %i: %i", n, sus);

    return 0;
}