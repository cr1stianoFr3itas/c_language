
/*

   Dev. Cristiano Freitas
   email: junior.brown.eda@gmail.com
   Data de inicio do projeto: 20/05/2021

*/



#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char argv[])

{

      FILE *pont_arquivoLog;
      char palavras[1000];

      pont_arquivoLog = fopen("Log_aquiv.txt","w");

        if (pont_arquivoLog == NULL)
        {
            printf("ERRO");
            return 1;

        } else
          {
               printf("INICIO ARQUIVO LOG... \n");
               scanf("%s", palavras);

               fprintf(pont_arquivoLog, "%s", palavras);

               fclose(pont_arquivoLog);

               printf("GRAVADOS COM SUCESSO! \n");

          }

     return 0;













}
