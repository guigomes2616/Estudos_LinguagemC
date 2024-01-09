#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade = 0; /* Variável começa com valor inicial de 0 */
	
	printf("Valor inicial da idade: %d \n", idade);
	
	printf("\n Digite a sua idade:");
	scanf("%d", &idade); /*Vai armazenar o que o usuario digitar = "%d" vai buscar o tipo da variavel, "&idade" vai buscar o valor dentro da variavel*/
	
	printf("\n Idade informada: %d", idade);
	
	return 0;
}
