#include <stdio.h>

int main() {
    // Declaração de variáveis para o movimento das peças
    int MoveTorre = 5;
    int MoveBispo = 5;
    int MoveRainha = 8;
    int Movecavalo=2;
    int i=0,j=0,k=0,l=0;
    
    // Movimento da Torre utilizando for
  
    printf("*** Movimento da Torre ***\n");
    
    for (i = 0; i < MoveTorre; i++) 
    {
        printf("Direita\n");
    }
    
    printf("\n");

    // Movimento do Bispo utilizando while
 
    printf("*** Movimento do Bispo ***\n");
    
    while (j < MoveBispo) 
    {
        printf("Cima, Direita\n");
        j++;
    }
    
    printf("\n");

    //Movimento da Rainha utilizando Do while
 
    printf("*** Movimento da Rainha ***\n");
   
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MoveRainha);
    
    printf("\n");

    //Movimento do cavalo  utilizando for e do while

    printf("*** Movimento do Cavalo ***\n");
    
    for (l ; l < Movecavalo; l++) 
    {
        printf("Baixo\n");
    }
    
        do
        {
            printf("Esquerdo\n");
        } while (l<2); l++;
        

    printf("\n");

    return 0;
}