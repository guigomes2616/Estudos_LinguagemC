#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int mat [3][3] = { // Declara uma matriz com 3 Colunas e 3 Linhas
	                 {1, 2, 3}, // Declara na Linha 0, 3 valores nas Colunas
	                 {4, 5, 6}, // Declara na Linha 1, 3 valores nas Colunas
					 {7, 8, 9}}; // Declara na Linha 2, 3 valores nas Colunas
	
	int linha, coluna; //Declara as variavies para as Colunas e para as Linhas
	
	printf("Imprimindo a primeira linha:\n");
	
	for(coluna=0; coluna<3; coluna++){ // Coluna começa em 0 e vai até 3 - Coluna++ para aumentar o seu valor (0, 1, 2)
		printf("%d ", mat[0][coluna]); // Imprime os valores, buscando a Linha [0] e a Coluna especifica
	}
	
	printf("\nImprimindo toda a Matriz:\n");
	
	for(linha=0; linha<3; linha++){ // Linha começa em 0 e vai até 3 - Linha++ para aumentar o seu valor (0, 1, 2)
		
		for(coluna=0; coluna<3; coluna++){ // A Coluna irá de 0 até 3 em cada loop da Linha, Assim zerando a contagem de Coluna e repetindo o seu loop
			
		    printf("%d ", mat[linha][coluna]); // Imprime os valores, buscando as posiões atuais de Linha[linha] e Coluna[coluna]
	}
	
	printf("\n"); // Pula uma linha em cada Linha da matriz
}
	
	return 0;
}
