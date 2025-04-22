/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[3][30];
    float pr1[3], pr2[3], media[3];
    char situacao[3][10];
    
    for(int i = 0; i < 3; i++){
        printf("nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("nota PR1: ");
        scanf("%f", &pr1[i]);
        printf("nota PR2: ");
        scanf("%f", &pr2[i]);
        
        media[i] = (pr1[i] +pr2[i]) / 2;
        if (media[i] > 5){
            strcpy(situacao[i], "aprovado");
        }else {
            strcpy(situacao[i], "reprovado");
        }
    }
    
    printf("\n---Resultado---\n");
    for (int i = 0; i<3; i++){
        printf("%s - Média: %.2f - %s\n", nome[i], media[i], situacao[i]);
    }
    
    return 0;
}