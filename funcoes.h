#ifndef FUNCOES_H
#define FUNCOES_H
#define AUX 5


 /**
	 * @file 		funcoes.h
	 * @author 		Cristiano Freitas
	 * @date 		25-05-2021 16:49:45
	 * @brief 		Neste file " .h " encontrasse os parametros que seram execultados,
                    a chamada de suas opções estão no menu do file " main.c " onde
                    as funções que estão implementadas
	                no file " funcoes.c " seram chamadas.


*/


char* concatenacao (char *stringA, char *stringB); // parametro da função opção B

int somaValores(int *valorA, int *valorB); // parametro da função opção C

double transfGraus (double *valorA); // parametro da função opção D

//int mediaVet(int *valor, int espaco); // parametro da função opção F

int matrizSoma(int linha, int coluna); // parametro da função opção H




#endif // FUNCOES_H
