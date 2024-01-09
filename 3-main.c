#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A, B, soma, sub, mult, div;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &A);
	
	printf("\nDigite o segundo numero:");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	div = A / B;
	
	printf("\nResultados:\n");
	printf("\nSoma: %d", soma);
	printf("\nSubtracao: %d", sub);
	printf("\nMultiplicacao: %d", mult);
	printf("\nDivisao: %d", div);
		
	return 0;
	
}
