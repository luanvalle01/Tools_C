#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strVerify(char *input, int *letras, int *pontos){

	/* Retorna quantas letras e     */
	/* pontos existem em uma string */
	
	int quantidade = strlen(input);
	
	//Referencias ASCII
	char ascii = '0';
	char ponto = '.';
	
	for(int i = 0; i < quantidade; i++){
		if(input[i] == ponto){
			*pontos += 1;
		}
		
		//Verifica se o char é um número entre 0 e 9
		int encontrado = 0;
		for(int j = ascii; j < ascii + 10; j ++){
			if(input[i] == j){
				encontrado = 1;
				break;
			}
		}
		//Caso não seja o contador de erros aumenta
		if(encontrado < 1 && input[i] != ponto){
			*letras += 1;
		}
	}
}

void typeCast(char *input, char *output){

	/* Verifica a possibilidade de  */
	/* cast de um input (string)    */
	/* e armazena em um output      */

	int erros = 0;
	int pontos = 0;                            
	
	strVerify(input, &erros, &pontos);
	
	if(pontos == 1 && erros == 0){
		strcpy(output,"float");
	}
	else if(pontos < 1 && erros == 0){
		strcpy(output,"int");
	}
	else{
		strcpy(output,"other");
	}
}
