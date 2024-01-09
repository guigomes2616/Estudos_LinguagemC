#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char vetor[16]; // Vetor do tipo CHAR (STRING) com 16 posições
	
	printf("Digite o seu Nome e Sobrenome (SCANF CONVENCIONAL = texto tudo junto): "); // Mensagem para testar o SCANF CONVENCIONAL
	scanf("%s", vetor); // Armazena os dados inseridos do tipo STRING, em relação ao VETOR ( Não aceita espaços)
	fflush(stdin); // Entrada de dados via Teclado
	
	printf("\nResultado: %s\n", vetor);
	
	
	
	printf("\nDigite o seu Nome e Sobrenome novamente (SCANF APRIMORADO = texto separado): ");// Mensagem para testar o SCANF APRIMORADA
	scanf("%15[^\n]s", vetor); // Armazena somente 15 posições do vetor, pois o 16º será reservada ao '\o' - [^\n] vai incluir os espaços
	fflush(stdin); // Entrada de dados via Teclado
	
	printf("\nResultado: %s", vetor);
	
	return 0;
}
