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

    scanf("%i", &x);
    scanf("%i", &y);
    
    if(x > y) {
        printf("Maior: %i", x);
    }
    if(y > x) {
        printf("Maior: %i", y);
    }
    else {
        printf("Os números são iguais.");
    }

    return 0;
}