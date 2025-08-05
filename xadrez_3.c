#include <stdio.h>

int numero;

void movimentoTorre(int numero) 
{   if ( numero <=0) 
        {return;} 
    else { printf("Direita \n");
movimentoTorre(numero-1);}
}


void movimentoBispo(int numero) 
{   if ( numero <=0) 
        {return;} 
    else { printf("Cima, Direita \n");
movimentoBispo(numero-1);}
}


void movimentoRainha(int numero) 
{   if ( numero <=0) 
        {return;} 
    else { printf("Esquerda \n");
movimentoRainha(numero-1);}
}



int main(){
  
  //Declara variáveis para os loops do cavalo

  int Movecavalo=2, l=0;

  // Movimento da Torre utilizando recursividade
  
    printf("*** Movimento da Torre ***\n");

    printf("\n");
    
    movimentoTorre(5);
  
    printf("\n");
    printf("\n");
    
  // Movimento do Bispo utilizando recursividade
  
    printf("*** Movimento do Bispo ***\n");

    printf("\n");

    movimentoBispo(5);

    printf("\n");
    printf("\n");


  // Movimento da Rainha utilizando recursividade
  
    printf("*** Movimento da Rainha ***\n");

    printf("\n");

    movimentoRainha(8);

    printf("\n");
    printf("\n");

  
  
  //Movimento do cavalo  utilizando for e do while

    printf("*** Movimento do Cavalo ***\n");
    
    for (l ; l < Movecavalo; l++) 
    {
        printf("Cima\n");
    }
    
        do
        {
            printf("Direita\n");
        } while (l<2); l++;
        

    printf("\n");

    return 0;
  }