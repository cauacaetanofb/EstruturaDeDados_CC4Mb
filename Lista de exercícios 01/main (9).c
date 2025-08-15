/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade, tempoServico;
    
    printf("Sua idade:");
    scanf("%i", &idade);
    
    printf("Seu tempo de serviço:");
    scanf("%i", &tempoServico);
    
    if(idade >= 65 || tempoServico >= 35 || (idade >= 60 && tempoServico >= 25)) {
        printf("Você pode se aposentar.");
    }
    else{
        printf("Você não pode se aposentar.");
    }
    
    return 0;
}