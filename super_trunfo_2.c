#include <stdio.h>

// Desafio Super Trunfo - Países


int main() {
    //Declara as variáveis para cada atributo da cidade.

    char codigo_estado1; char codigo_estado2;
    char codigocarta1[4]; char nomecidade1[20]; char codigocarta2[4]; char nomecidade2[20];
    unsigned long int populacao1; int pontos_turisticos1; unsigned long int populacao2; int pontos_turisticos2;
    float pib1; float area1; float pib2; float area2, dens1, dens2, pibpc1, pibpc2, super1, super2;
    int batalha, resultadopop, resultadoarea, resultadopib , resultadotur, resultadodens, resultadopibpc, resultadosuper;


    // Cadastra as Cartas:

    printf(" \n");

    printf("Cadastre a Carta 1: \n");

    printf("Digite o Código do Estado: \n");
    scanf( "%c", &codigo_estado1);

    printf("Digite o Código da Carta: \n");
    scanf( "%s", &codigocarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf( "%s", &nomecidade1);

    printf("Digite a População da Cidade: \n");
    scanf( "%lu", &populacao1);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf( "%d", &pontos_turisticos1);

    printf("Digite a Área em Km2 da Cidade: \n");
    scanf( "%f", &area1);

    printf("Digite o PIB em Reais da Cidade: \n");
    scanf( "%f", &pib1);
  
    printf(" \n");

    printf("Cadastre a Carta 2: \n");

    printf("Digite o Código do Estado: \n");
    scanf( " %c", &codigo_estado2);

    printf("Digite o Código da Carta: \n");
    scanf( "%s", &codigocarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf( "%s", &nomecidade2);

    printf("Digite a População da Cidade: \n");
    scanf( "%lu", &populacao2);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf( "%d", &pontos_turisticos2);

    printf("Digite a Área em Km2 da Cidade: \n");
    scanf( "%f", &area2);

    printf("Digite o PIB em Reais da Cidade: \n");
    scanf("%f", &pib2);

    // calcula densidade populacional e PIB per capta

    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;
    pibpc1 = pib1 / populacao1;
    pibpc2 = pib2 / populacao2;

    // Calcula os super poderes

    super1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibpc1 + 1/dens1;
    super2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibpc2 + 1/dens2;

    // Exibe os Dados das Cartas:

    printf(" \n");
    printf(" \n");

    printf("Carta 1 \n");

    printf("Código do Estado: %c \n", codigo_estado1);
    printf("Código da Carta: %s \n", codigocarta1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("População: %lu  Habitantes \n", populacao1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos1);
    printf("PIB: %.2f Reais \n" , pib1);
    printf("Área: %.2f Km \n", area1);
    printf("Densidade Populacional: %.2f hab/km² \n", dens1);
    printf("PIB per Capta: %.2f Reais \n", pibpc1);
    printf("Super Trunfo: %.2f \n", super1);
   
    printf(" \n");

    printf("Carta 2 \n");

    printf("Código do Estado: %c \n", codigo_estado2);
    printf("Código da Carta: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %lu  Habitantes \n", populacao2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("PIB: %.2f Reais \n", pib2);
    printf("Área: %.2f Km \n", area2);
    printf("Densidade Populacional: %.2f hab/km² \n", dens2);
    printf("PIB per Capta: %.2f Reais \n", pibpc2);
    printf("Super Trunfo: %.2f \n", super2);


    printf(" \n");
    printf(" \n");

    // Calcula Batalhas

    resultadopop = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadotur = pontos_turisticos1 > pontos_turisticos2;
    resultadodens = dens1 < dens2;
    resultadopibpc = pibpc1 > pibpc2;
    resultadosuper = super1 > super2;

    // Batalha das Cartas

    printf(" **********A BATALHA DAS CARTAS IRÁ COMEÇAR********** \n");

    printf(" \n");
    printf(" \n");

    // Escolha o atributo do Combate

    printf("Escolha qual atributo você quer Combater\n");
    printf(" Digite 1 para Combater em População \n");
    printf(" Digite 2 para Combater em Pontos Turísticos \n");
    printf(" Digite 3 para Combater em Área \n");
    printf(" Digite 4 para Combater em PIB \n");
    printf(" Digite 5 para Combater em PIB per Capta \n");
    printf(" Digite 6 para Combater em Densidade Demográfica \n");
    printf(" Digite 7 para Combater em Super Trunfo! \n");

    scanf("%d", &batalha);

    switch (batalha)
    {
    case 1:
        if (populacao1 > populacao2)
         { printf("A Carta número 1  Maceio venceu o desafio de População \n");
         } else {
            printf("A carta número 2 Fortaleza venceu o desafio de População \n");
    }

        printf(" A Populacão da Carta 1 é %lu Habitantes \n", populacao1);
        printf(" A Populacão da Carta 2 é %lu Habitantes \n", populacao2);
    
        break;

    
    case 2:
       if (pontos_turisticos1 > pontos_turisticos2)
         { printf("A Carta número 1  Maceio venceu o desafio de Pontos Turísticos \n");
        } else {
            printf("A carta número 2 Fortaleza venceu o desafio de Pontos Turísticos \n");
    }

        printf(" Os Pontos Turísticos da Carta 1 são %d \n", pontos_turisticos1);
        printf(" Os Pontos Turísticos da Carta 2 são %d \n", pontos_turisticos2);
    
        break;

    case 3:
         if (area1 > area2)
         { printf("A Carta número 1  Maceio venceu o desafio de Área \n");
        } else {
            printf("A carta número 2 Fortaleza venceu o desafio de Área \n");
    }

        printf(" A Área da Carta 1 é %.2f Km2 \n", area1);
        printf(" A Área da Carta 2 é %.2f Km2 \n", area2);   
    
        break;

     case 4:
         if (pib1 > pib2)
         { printf("A Carta número 1  Maceio venceu o desafio de PIB \n");
        } else {
            printf("A carta número 2 Fortaleza venceu o desafio PIB \n");
    }

        printf(" O PIB da Carta 1 é %.2f Reais \n", pib1);
        printf(" O PIB da Carta 2 é %.2f Reais \n", pib2);  

        break;   

    case 5:
       if (pibpc1 > pibpc2)
         { printf("A Carta número 1  Maceio venceu o desafio de PIB per Capta \n");
        } else {
            printf("A carta número 2 Fortaleza venceu o desafio de PIB per Capta \n");
    }
   
        printf(" O PIB per Capta da Carta 1 é %.2f Reais \n", pibpc1);
        printf(" O PIB per Capta da Carta 2 é %.2f Reais \n", pibpc2); 
   
        break;

    case 6:
         if (dens1 < dens2)
         { printf("A Carta número 1  Maceio venceu o desafio de Densidade Demográfica \n");
        } else {
            printf("A carta número 2 Fortaleza venceu o desafio de Densidade Demográfica \n");
    }
   
        printf(" A Densidade Demográfica da Carta 1 é %.2f Habitantes por Km2 \n", dens1);
        printf(" A Densidade Demográfica da Carta 2 é %.2f Habitantes por Km2 \n", dens2);    
    
        break;

    case 7:
         if (super1 > super2)
         { printf("A Carta número 1  Maceio venceu o desafio de Super trunfo! \n");
        } else {
            printf("A carta número 2 Fortaleza venceu o desafio de Super Trunfo! \n");
    }
    
        printf(" O Super Trunfo da Carta 1 é %.2f \n", super1);
        printf(" O Super Trunfo da Carta 2 é %.2f \n", super2);        
    
        break;


    default:
        printf("Opção Inválida \n");
    }

     
    printf(" \n");
    printf(" \n");

    return 0;
}