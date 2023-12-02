#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num = 1; //NUM já inicializa com valor de 1
	
	while(num <= 10){ //ENQUANTO NUM for menor ou igual a 10, o loop irá se repetir
		
		printf(" %d ", num); //Imprime os valores na tela
		num ++; //adiciona 1 unidade a mais ao NUM
	}
	
	return 0;
}
