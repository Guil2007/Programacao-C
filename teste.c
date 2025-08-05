#include <stdio.h>

int numero;

void recursivo(int numero) 
{   if ( numero <=0) 
        {return;} 
    else { printf("%d \n" , numero);
recursivo(numero-1);}
}

int main(){
    recursivo(8);
    
    printf("\n");
    printf("\n");
    printf("\n");
    
    return 0;


}