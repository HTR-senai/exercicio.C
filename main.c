/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    int contA = 0, contE = 0;
    
    for (int i = 0; i < 3; i++){
        printf("Digite o nome %d: ", i);
        scanf("%s", nome);
        
        for (int j = 0; nome [j] != '\0'; j++) {
            char letra = nome [j];
            
            if (letra == 'A' || letra == 'a'){
                contA++;
            }
               
            if (letra == 'E' || letra == 'e') {
                contE++;
            }
        }   
    }

    printf("Total de letra A: %d\n", contA);
    printf("Total de letra E: %d\n", contE);
    
    return 0;
}