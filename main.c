/*

   Dev. Cristiano Freitas
   email: junior.brown.eda@gmail.com
   Data de inicio do projeto: 20/05/2021
   Data de "Final" do projeto: 26/05/2021

*/

#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#include "funcoes.h"

char hello()
{

char frase[20] = "HELLO WORD";

return printf("%s", frase);

}

int main (int argc, char argv[])
{

    //A inicialização do programa acontece por meio de um menu com opções de exercicios (ao total 7 opções criadas).


    printf("====================================\n");
    printf("        OPÇÕES DE EXERCÍCIOS        \n");
    printf("====================================\n");

    printf(" OPÇÃO A -> EXIT \n");
    printf(" OPÇÃO B -> INDENTIFICAÇÃO \n");
    printf(" OPÇÃO C -> CONJUNTO DE CALCULOS \n");
    printf(" OPÇÃO D -> FAHRENHEIT / CELSIUS \n");
    printf(" OPÇÃO E -> FATORIAL \n");
    printf(" OPÇÃO F -> ARRAY \n");
    printf(" OPÇÃO G -> TABUADA \n");
    printf(" OPÇÃO H -> CALCULO DA LINHA/COLUNA \n");
    printf(" OPÇÃO I -> HELLO WORD \n");

    char opcao;
    printf(" DIGITE SUA OPÇÕES: ");
    scanf("%c", &opcao);
    opcao = toupper(opcao);
    printf("\n");

    // Atraves da estrutura de seleção (switch) podemos fazer a chamada dos exercicios, interagir e ver a impressão na tela.

    switch(opcao)
    {

    case 'A':

        printf(" EXIT... \n");
        printf("\n");
        break;

    case 'B':

        printf(" INICIANDO INDENTIFICAÇÃO... \n");
        printf("\n");
        break;

    case 'C':

        printf(" INICIANDO CONJUNTO DE CALCULOS... \n");
        printf("\n");
        break;

    case 'D':

        printf(" INICIANDO FAHRENHEIT / CELSIUS... \n");
        printf("\n");
        break;

   case 'E':

        printf(" INCIANDO FATORIAL... \n");
        printf("\n");
        break;

   case 'F':

        printf(" INICIANDO ARRAY... \n");
        printf("\n");
        break;

   case 'G':

        printf(" INCIANDO TABUADA... \n");
        printf("\n");
        break;

   case 'H': // infelizmente acontece um erro ao calcular e o retorno do valor é sempre o mesmo

       printf(" INICIANDO CALCULO DA LINHA/COLUNA ");
       printf("\n");
       break;

  case 'I':

       printf(" INCIANDO FRASE... \n");
       printf("\n");
       break;


   default :

       printf("OPÇÃO INVALIDA... ");
       printf("\n");
       break;



    }


    if(opcao == 'A') // opção de saida com contagem regressiva
    {

        int i = 11;

        while(i > 0)
        {
            --i;

            printf(" %i\n", i);

        }

        printf(" ======*** FIM ***====== \n");

    }

    if (opcao == 'B') // opção de entrada no proceso de indentificação
    {

        char primeiroNome[10];
        char sobreNome[10];
        int idade;
        int tamanho;


        printf(" DIGITE SEU PRIMEIRO NOME: ");
        scanf("%s", &primeiroNome);
        printf(" DIGITE SEU SOBRENOME: ");
        scanf("%s", &sobreNome);
        printf(" DIGITE SUA IDADE: ");
        scanf("%i", &idade);

        concatenacao(primeiroNome, sobreNome);

        printf("\n");

        printf(" %s é seu nome completo. \n", concatenacao(primeiroNome, sobreNome));
        printf(" %i sua idade é \n", idade);
        tamanho = strlen(concatenacao(primeiroNome, sobreNome));
        printf(" Total de caracteres do seu nome é : %d \n", tamanho);


    }

    if (opcao == 'C') // opção de entrada no processo de conunto de calculos
    {
       int numeroA, numeroB, resulSoma, quadradoA, quadradoB, somaDosQuad;
       float resulRaizQuad;

       //  A soma dos números

       printf("INFORME O PRIMEIRO NÚMERO: ");
       scanf("%i", &numeroA);
       printf("INFORME O SEGUNDO NÚMERO: ");
       scanf("%i", &numeroB);

       somaValores(&numeroA, &numeroB);

       printf("Resultado da soma é : %i \n", somaValores(&numeroA, &numeroB));

       quadradoA = numeroA * 4;

       // O produto do primeiro número pelo quadrado do segundo

       quadradoB = numeroB * 4;
       numeroA = quadradoB;

       printf("Resultado é : %i \n", numeroA);

       // O quadrado do primeiro número


       printf("Resultado do primeiro número como quadrado é : %i \n", quadradoA);

       // A raiz quadrada da soma dos quadrados

       somaDosQuad = quadradoA + quadradoB;

       printf("Resultado da soma dos quadrados é : %i \n", somaDosQuad);

       resulRaizQuad = sqrt(somaDosQuad);

       printf("Resultado da raiz quadrada da soma dos quadrados: %2f \n", resulRaizQuad);

       // O seno da diferença do primeiro número pelo segundo

       float senoA = sin(numeroA);
       float senoB = sin(numeroB);

       float diferencaSeno =  senoA != senoB;

       printf("Resultado da diferença de seno entre os 2 numeros: %2f \n", diferencaSeno);

       // O módulo do primeiro número

       float moduloNumeroA = numeroA % numeroA;

       printf("O modulo do primeiro numero é: %2f \n", moduloNumeroA);

    }

    if (opcao == 'D') // opcção de entrada no processo de trasnformação FAHRENHEIT / CELSIUS
    {

        double fahren;


        printf(" digite um valor em fahrenheit: ");
        scanf("%lf", &fahren);

        double c = transfGraus(&fahren);

        printf(" O valor do resultado em Double: %lf \n", c);


        int cs = transfGraus(&fahren);
        printf(" O valor do resultado em Inteiro: %i \n", cs);

    }

    if (opcao == 'E') // opção de entrada para resultado de fatorial de numeros
    {

        int fatorial, numero;
        printf("Insira um valor para o calcular seu fatorial: ");
        scanf("%d", &numero);

        for(fatorial = 1; numero > 1; --numero)
            fatorial = fatorial * numero;

        printf(" Resultado : %d \n", fatorial);


    }

    if (opcao == 'F') // opcção de calculo de array, ja contém uma entrada e na tela já imprimira o valor
    {

        // CODIGO AUXILIXAR

        char numero[10];
        printf("Digite um valor com no maximo 10 digitos: ");
        scanf("%s", numero);

        char *letra = numero;
        int soma = 0;

        while (*letra!='\0')
        {
            soma += (*letra) - '0';

            letra++;
        }

        printf("%s dá como soma de numeros %d", numero,soma);

        // O CODIGO A BAIXO ESTÁ CONTÉM ERROS E ESTÁ EM CORREÇÃO

      /*  int valores, *vx;
        char strTrans[10];
        strcpy(strTrans,"12345");
        valores = atoi(strTrans);
        printf(" Int valor = %i\n", valores);
        vx = &valores;

        int resultado;

        resultado = mediaVet(&valores, 10);
        printf(" A media dos vetores e de %d \n", resultado); */


    }

    if (opcao == 'G') // opção de TABUADA com matriz, já contém uma entrada e na tela já imprimira o valor
    {

    int *tabuada;
    int LINHA = 10;
    int COLUNA = 10;

    tabuada = malloc(LINHA * COLUNA * sizeof (int));


    for (LINHA = 0; LINHA < 10; LINHA++)
    {

        for(COLUNA = 0; COLUNA < 10; COLUNA++)
        {
           tabuada [LINHA],tabuada[COLUNA] = LINHA*COLUNA;
        }
     }

    for(LINHA = 0; LINHA < 10; LINHA++)

    {

        printf("\n");

        for(COLUNA = 0; COLUNA < 10; COLUNA++)
        {
            printf("%d x %d = %d \t", LINHA,COLUNA,tabuada[LINHA],tabuada[COLUNA]);
        }

    }


      // Parte do programa onde será recolhido a tabela a cima em sequencia será inserida no aquivo .txt abaixo

      FILE *pont_tabuada;
      char tabela[1000];

      pont_tabuada = fopen("tabuada_aquiv.txt","w");

        if (pont_tabuada == NULL)
        {
            printf("ERRO");
            return 1;

        } else
          {
               printf("GRAVAR TABELA DA TABUADA... \n");
               scanf("%s", tabela);

               fprintf(pont_tabuada, "%s", tabela);

               fclose(pont_tabuada);

               printf("GRAVADOS COM SUCESSO! \n");

          }

      free(tabuada);






    }

    if (opcao == 'H') // opção de entrada na soma de LINHA E COLUNAS de uma matriz { a função contém um erro de sempre retornar o mesmo valor }
    {


        int *matriz;
        int somac;
        int LINHA, COLUNA;
        int auxMA;





        printf ("\nDigite valor para as notas da matriz\n\n");

        for ( LINHA = 0; LINHA < 6; LINHA++ )
        {

            for ( COLUNA = 0; COLUNA < 6; COLUNA++ )
            {


                printf ("\n Nota[%d][%d] = ", LINHA, COLUNA);
                scanf ("%d", &matriz[LINHA], & matriz[COLUNA]);

            }
        }
        matriz = malloc(LINHA * COLUNA * sizeof (int));
        auxMA = matriz[LINHA], matriz[COLUNA];
        auxMA = matrizSoma(LINHA, COLUNA);



        free(matriz);





    }


    if (opcao == 'I') // pção de entrada para uma frase
    {

        hello();

    }





    return 0;
}
