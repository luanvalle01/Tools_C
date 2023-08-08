#include "suportFunctions.h"

void main(){
	char texto[50];
	char type[10];
	
	float valor;
	
	while(1){
		printf("Digite um float: ");
		scanf("%s",texto);
		
		typeCast(texto,type);
		
		if(strcmp(type,"float") == 0){
			valor = atof(texto);
			break;
		}
		else{
			printf("\nValor incompativel!\n");
		}
	}
	
	printf("\nFuncionou!\n%.2f\n",valor);
}
