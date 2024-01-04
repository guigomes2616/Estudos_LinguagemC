#include <stdio.h>
#include <stdlib.h>

float maior (float num1, float num2){
	
	if(num1>num2)
	return num1;
	
else
	return num2;
	
}

int main(int argc, char *argv[]) {
	
	float x, y, m;
	
	printf("Digite dois numeros que ao final sera determinado o maior entre eles \n");
	
	printf("\nInsira o primeiro numero: ");
	scanf("%f", &x);
	
	printf("\nInsira o segundo numero: ");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("\nResultado: %.2f", m);
	
	return 0;
}
