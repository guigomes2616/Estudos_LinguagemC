#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	for(i=1; i<=10; i++){
	
	  if(i == 5){
	  
	    continue; // Se i fr igual a 5, ele não será impresso (sendo pulado) e será executado o proximo laço
	  }
	  
	  printf("%d ", i);
	}
	
	return 0;
}
