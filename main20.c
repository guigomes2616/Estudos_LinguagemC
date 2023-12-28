#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3 //Cria uma constante TAM de tamanho 3, para manipular o VETOR

struct tipo_pessoa{ //Registro de dados
	int idade; // Campo idade
	float peso; // Campo peso
	char nome [50]; // Campo nome de tamanho 50
};

typedef struct tipo_pessoa
               tipo_pessoa; // Renomeia o nome da STRUCT para "tipo_pessoa"
               
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Permite regras do português
	
	tipo_pessoa lista[TAM]; // Declara um VETOR "LISTA" do tipo TIPO_PESSOA, com o tamanho igual a 'TAM'
	int p; //Posições do VETOR
	
//Para cada posição do VETOR(TAM = 3), terá 3 campos do STRUCT
	
	for(p=0; p<TAM; p++){ //P vai de 0 até TAM, incrementando 1 unidade a mais
		
		printf("Insira os dados da pessoa [%d]: \n", p+1); //Mensagem ao usúario - chama a posição atual - incrementando p+1 para que a posição dos campos mude de 1-2-3
		
		printf("\nNome: ");
		scanf("%50[^\n]s", &lista[p].nome); //Armazena o tamanho da string NOME - Armazena os espaços - busca o VETOR[posição atual].o nome do campo
		
		printf("\nIdade: ");
		scanf("%d", &lista[p].idade);
		fflush(stdin); //Evita travamentos e bugs do teclado
		
		printf("\nPeso: ");
		scanf("%f", &lista[p].peso);
		fflush(stdin);
		
		printf("\n"); //Serve só para pular uma linha ao fim de cada loop
	}
system("cls"); //Limpa a tela, mas não interfere nos valores inseridos

    puts("Seus dados: \n");
    
    for(p=0; p<TAM; p++){ //Loop para Imprimir os resultados inseridos
    
    printf("-------------- Pessoa [%d] --------------\n", p+1); // Vai Imprimir em cada Loop, de acordo com a posição atual - p+1 (muda para a posição seguinte)
    
    printf("\nNome: %s\n", lista[p].nome); //Armzena o tipo do valor - busca a posição do vetor, e o campo atual
    printf("\nIdade: %d\n", lista[p].idade);
    printf("\nPeso: %.2f\n", lista[p].peso);
}

	return 0;
}
