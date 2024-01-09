#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float nota;
	
	printf("Se voce tirou uma nota menor que 5, sera reprovado, se tirou maior ou igual a 5, Aprovado \n");
	
	printf("\nDigite a sua nota:");
	scanf("%f", &nota);
	
	if(nota>=5.0){
		printf("\nAprovado(a)");
 	
	}else{
		printf("\nReprovado(a)");
		
	}
	
	return 0;
}
