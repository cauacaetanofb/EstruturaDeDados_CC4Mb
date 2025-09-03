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

void bubbleSort(int *v, int n){
    int troca, aux;
    do{
        troca = 0;
        for(int i = 0; i< n-1; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = 1;
            }
        }
        
    }while(troca);
}

int main()
{
    int vetor[10] = {6,75,1,14,24,18,3,7,50,10};
    imprimirVet(vetor, 10);
    bubbleSort(vetor, 10);
    imprimirVet(vetor, 10);

    return 0;
}