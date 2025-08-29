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

void selectionSort(int *v, int n){
    int i, j, menor, aux;
    for(i=0;i<n;i++){ //percorre o valor inteiro.
        menor = i;
        for(j=i+1;j<n;j++){ //percorre do i até o final.
            if(v[j]<v[menor]){ //verifica se achou um menor que o atual.
                menor = j; // atualiza o menor.
            }
        }
        if(i!=menor){ //se achou um menor que o lugar que estou, eu troco.
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}

int main()
{
    int vetor[10] = {6,75,1,14,24,18,3,7,50,10};
    imprimirVet(vetor, 10);
    selectionSort(vetor, 10);
    imprimirVet(vetor, 10);

    return 0;
}
