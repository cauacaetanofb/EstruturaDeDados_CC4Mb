/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void imprimirVet(int *m, int n){
    int i;
    printf("\nVetor: |");
    for(i = 0; i < n; i++){
        printf(" %d |", m[i]);
    }        
}

void insertionSort(int *v, int n){
    int aux, j;
    for(int i= 1; i< n; i++){
        aux = v[i];
        j = i- 1;
        
        while(j>= 0 && v[j] > aux){
            v[j+ 1] = v[j];
            j--;
        }
        v[j+ 1] = aux;
    }
    
}

int main()
{
    int vetor[10] = {6,75,1,14,24,18,3,7,50,10};
    imprimirVet(vetor, 10);
    insertionSort(vetor, 10);
    imprimirVet(vetor, 10);

    return 0;
}