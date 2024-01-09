#include <stdio.h>
#include <stdlib.h>

void imprime1 (int vet[], int n){ //Declara a função "imprime1", chama o vetor "vet" com tamanho n
int i; //Posições

for(i=0; i<n; i++){ //Loop para percorrer as posições do vetor
	printf("%d ", vet[i]); //Imprime cada posião de acordo com cada loop
}}

void imprime2 (int vet[5]){ //Função "imprime2" chama o vetor "vet" com tamanho 5
int i; //Posições

for(i=0; i<5; i++){ //Loop 
	printf("%d ", vet[i]); //Imprime
}}

void imprime3 (int *vet, int n){ //Função "imprime3"
int i; // Posições

for(i=0; i<n; i++){ //Loop
	printf("%d ", vet[i]); //Imprime
}}

int main(int argc, char *argv[]) {
	
	int vet[5] = {1, 2, 3, 4, 5}; // Declara o vetor "vet" com tamanho 5; valores definidos
	
	puts ("Primeiro Imprime:");
	imprime1 (vet,5); // Busca no valor de função "imprime1" referente ao vet de tamanho 5
	
	puts ("\nSegundo Imprime:");
	imprime2 (vet); //BUsca o valor da função "imprime2" referente ao "vet" - o tamanho já foi definido na função
	
	puts ("\nTerceiro Imprime:");
	imprime3 (vet,5); //Busca no valor de função "imprime1" referente ao vet de tamanho 5
	
	return 0;
	
}
