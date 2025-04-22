/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main(){
   int numeros[5];
   
   for(int i = 0; i < 5; i++){
       printf("Digite o numero %d: ", i);
       scanf("%d", &numeros[i]);
   }
   
   printf("numeros digitados: \n");
   for (int i = 0; i < 5; i++){
       printf("%d\n", numeros[i]);
   }

    return 0;
}