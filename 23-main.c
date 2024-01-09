#include <stdio.h>
#include <stdlib.h>

void imprime (int mat[][4], int n){ //Delcara a função "imprime"; com a matriz "mat" de linha = n E coluna = 4
int lin, col; // Posições da matriz

for(lin=0; lin<n; lin++){ //Loop referente as linhas
	for(col=0; col<4; col++){ //Loop referente as colunas
		printf("%d ", mat[lin][col]); //Imprime, buscando os valores atuais da s linhas e colunas da matriz
}
printf("\n"); // Pula uma linha
}
}

int main(int argc, char *argv[]) {
	
	int mat[3][4] = {{1,2,3,4}, // Declara a matriz "mat" com linha = 3 (será o valor de n) E coluna = 4
	                {50,60,70,80},
	                {91,101,111,121}}; // Valores em cada posição
	
	imprime(mat, 3); // Rferente a função "imprime" buscando o tamanho da linha da matriz
	
	return 0;
}
