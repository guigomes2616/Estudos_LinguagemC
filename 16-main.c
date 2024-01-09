#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Inclui a biblioteca de String
#include <locale.h> //Inclui a biblioteca de acentos

#define N 20 //Constante declarando N=20 (posições)

int main(){
	setlocale(LC_ALL,"Portuguese"); // Inclui os acentos de acordo a língua portuguesa
	
	char origem[N] = {"Olá Mundo!"}; // STRING ORIGEM com tamanho de N, com o conteúdo já declarado
	char destino[N] = {"Sem conteúdo"}; // STRING DESTINO com tamanho de N, sem conteúdo
	
	printf("Antes do SCRCPY: \n");
	puts(origem); //Vai imprimir o conteúdo anterior de Origem
	puts(destino); // Vai imprimir o conteúdo anterior de Destino (Lixo de memória)
	
	strcpy(destino,origem); // Usado para alterar o conteúdo de uma STRING ( STRING destino vai receber o conteudo da STRING origem)
	
	printf("\nDepois do STRCPY \n");
	puts(origem); // Vai imprimir o valor atual de Origem
	puts(destino); // Vai imprimir o novo valor atual de Destino
}
