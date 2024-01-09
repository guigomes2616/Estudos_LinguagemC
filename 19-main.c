#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{ //Cria um Registro de dados STRUCT 
	int idade; //Declara um campo Idade do tipo Int
	float peso; //Declara um campo Peso do tipo Float
	char nome [TAM]; //Declara um campo Nome do tipo Char, com tamanho TAM = 50
};

typedef struct tipo_pessoa 
        tipo_pessoa; //Redefine o nome da STRUCT "Struct tipo_pessoa" para "tipo_pessoa"

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	tipo_pessoa pes = {0, 0.0, "Teste"}; // Cria uma variável PES do novo tipo TIPO_PESSOA
	
	printf("Início:\n");
	
	printf("\npes.idade: %d \n", pes.idade); //Imrpime, buscando o campo IDADE da variavel PES
	printf("pes.peso: %.2f \n", pes.peso); //Imrpime, buscando o campo PESO da variavel PES
	printf("pes.nome: %s \n", pes.nome); //Imrpime, buscando o campo NOME da variavel PES
	
	
    //--------------------------------------------- Atribuindo Valores -----------------------------------------
    
    pes.idade = 10; //Altera o conteúdo do campo
    pes.peso = 99.99; //Altera o conteúdo do campo
    strcpy(pes.nome, "Texto"); // Usando a biclioteca STRING.H, altera o conteúdo do campo
    
    printf("\nAlterando os campos via teclado:\n");
    printf("\npes.idade: %d \n", pes.idade);
    printf("pes.peso: %.2f \n", pes.peso);
    printf("pes.nome: %s \n", pes.nome);
    
    
    //--------------------------------------------- Solicitacção ao Usúario -----------------------------------------
      
    printf("\nDigite a sua idade: ");
    scanf("%d", &pes.idade); //Armazena, buscando o campo da variável
    
    printf("Digite o seu peso: ");
    scanf("%f", &pes.peso);
    fflush(stdin); // Para evitar travamentos ou bugs do teclado
    
    printf("Digite o seu primeiro nome: ");
    scanf("%s", &pes.nome);
    
    printf("\nAlterando com os dados do usúario: \n");
    
    printf("\npes.idade: %d \n", pes.idade);
    printf("pes.peso: %.2f \n", pes.peso);
    printf("pes.nome: %s \n", pes.nome);
	
	return 0;
}
