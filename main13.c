#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[5]; // Declara o Vetor com 5 posições
	int p; // Declara as Posições
	
	for(p=0; p<5; p++){ // Loop vai se repetir enquanto P(POSIÇÕES) for de 0 à 5, sendo incrementado 1 unidade a mais
		
		printf("Insira um numero para a posicao [%d]: ", p); // " %d, p" Vai buscar o tipo do valor digitado na variavel P 
		scanf("%d", &vetor[p]); // Armazena o a posição atual do Vetor
	}
	
	printf("\nDados inseridos: ");
	
	for(p=0; p<5; p++){ // Mesma condição, mas agora para exibir os valores digitados conforme condição (na ordem)
		
		printf("[%d] ", vetor[p]); // Imprime o que o usuario digitar (diferente do SCANF, que armazena)
}

	return 0;
}
