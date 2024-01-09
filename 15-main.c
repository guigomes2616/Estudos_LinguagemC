#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char vetor[10];
	
	printf("Digite o seu Nome e Sobrenome (Leiura pelo GETS): ");
	gets(vetor); // Armazena o valor dado para VETOR
	fflush(stdin); // Entrada via Teclado
	
	puts("\nResultado: \n"); // Imprime na tela a mensagem
	puts(vetor); //Busca o valor do VETOR
	
	
	printf("\nDigite o seu Nome e Sobrenome novamente (Leitura pelo FGETS): ");
	fgets(vetor, 10, stdin); // Armazena o valor do VETOR, limita a inserção de dados à 10 (posições) e limpa o teclado
	fflush(stdin); // Entrada via Teclado
	
	puts("\nResultado: \n"); // Imprime na tela a mensagem
	puts(vetor); //Busca o valor do VETOR
		
	return 0;
}
