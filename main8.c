#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num = 1; //NUM inicializa com valor 1
	
	do{
		printf(" %d ", num);
		num++;
		
	}while(num <=10);
	
	//Ou Seja, A condição só testada no Final do código, tento a possibilidade de um valor de NUM errado ser impresso na tela
	// EX: se NUM fosse inicializado com 11
	
	return 0;
}
