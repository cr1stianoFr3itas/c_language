/*
   Dev. Cristiano Freitas
   email: junior.brown.eda@gmail.com
   Data de inicio do projeto: 20/05/2021
   Data de "Final" do projeto: 26/05/2021
*/


#include "funcoes.h"
#define AUX 5

char* concatenacao (char *stringA, char *stringB) // função opção B
{
    int i,j;

    for (i = 0; stringA[i] != '\0'; ++i);
    for (j = 0; stringB[j] != '\0'; ++j, ++i)
    {

        stringA[i] = stringB[j];

    }

    stringA[i] = '\0';

    return stringA;
}

int somaValores(int *valorA, int *valorB) // função opção C
{
     int resultado = *valorA + *valorB;

     return  resultado;
}

double transfGraus (double *valorA) // função opção D
{

  double resultado = (*valorA - 32.0) * 5.0 / 9.0;
  return resultado;


}

/*int mediaVet(int *valor, int espaco)  // função opção F APRESENTANDO BUG
{
    int media;
    int soma = 0;
    int i;

    for(i = 0; i < espaco; i++)
    {
        soma = soma + valor[i];
    }

    media = soma/espaco;

    return media;
}*/


int matrizSoma(int linha, int coluna) // função opção H
{

    int matriz[5][5];
    int somac = 0;


for ( linha = 0; linha < AUX; linha++ )
    for ( coluna = 0; coluna < AUX; coluna++ )
    {
       printf ("\nElemento[%d][%d] = %d", linha, coluna,matriz[linha], matriz [coluna]);
    }

    for(linha = 0; linha < AUX; linha++){
        for(coluna = 0; coluna < AUX ; coluna++){
            if(linha == 0){
                somac = somac + matriz[linha][coluna] * 5;
            }
        }

    }



  //SAINDA DA SOMA


    printf("\n\nSoma das colunas e linhas = %d\n\n", somac);

}
