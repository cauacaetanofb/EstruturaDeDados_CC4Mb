/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void imprime(int *m, int n){
    int i;
    printf("\nVetor: | ");
    for(i = 0; i < n; i++){
        printf("%d | \t", m[i]);
    }        
}

int main()
{
    
    int vet[5] = {1,2,3,4,5};
    imprime(vet,5);
        
    return 0;
}
