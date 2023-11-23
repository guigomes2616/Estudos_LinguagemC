#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float nota;
	
	printf("Voce tem direito ao exame se tirou entre 4 e 7 \n");
	
	printf("\nDigite a sua nota: ");
	scanf("%f", &nota);
	
	if(nota >=4.0 && nota <7.0){ // SE a nota for maior ou igual a 4 E menor que 7...
		printf("\nTem direito ao exame!");
		
	}else{
		printf("\nNao tem direito ao exame!");
		
	}
	
	return 0;
}
