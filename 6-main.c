#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia;
	
	printf("Insira um valor de 1 a 7 para determinar o dia da Semana: ");
	scanf("%d", &dia);
	
	switch(dia){ //SE a variavel DIA for IGUAL a...
		
		case 1:
			printf("\nDomingo"); //... Domingo, será impresso na tela, SE NÃO, o bloco será ignorado e o proximo bloco (CASE) tentará ser executado
			break;
		
		case 2:
			printf("\nSegunda-feira");
			break;
			
		case 3:
			printf("\nTerca-feira");
			break;
			
		case 4:
			printf("\nQuartaa-feira");
			break;
			
		case 5:
			printf("\nQuinta-feira");
			break;
			
		case 6:
			printf("\nSexta-feira");
			break;
			
		case 7:
			printf("\nSabado");
			break;
			
		default:
			printf("\nValor invalido");
			break;
	}
	
	return 0;
}
