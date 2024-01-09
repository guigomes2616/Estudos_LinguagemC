#include "24-poligonos.h" //Conecta a biblioteca criada

float calcPerimetroTriangulo (float a, float b, float c){ // Declara os parâmetros e função das opções (24-main)
	
	return a + b + c;
}

float calcPerimetroRetangulo (float b, float a){
	
	return 2*b + 2*a;
}

float calcPerimetroCirculo (float r){
	
	return 2*PI*r;
}

float calcAreaTriangulo (float b, float a){
	
	return (b*a)/2;
}

float calcAreaRetangulo (float b, float a){
	
	return b*a;
}

float calcAreaCirculo (float r){
	
	return 2*PI*r*r;
}
