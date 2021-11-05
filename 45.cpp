/* 
Implemente um sistema utilizando funcao que leia um valor e apresenta para os usuario o valor do CUBO do valor Digitado.
*/
#include <stdio.h>

void cubo(float a){
	float cubo;
	cubo = (a*a*a); 
	printf("a valor de %f eh %f",a,cubo); 
	
} 
	int main()
{
	float valor; 
  
	printf("digite o valor:n/");
		scanf("%f", &valor);
	
	cubo(valor);   
	
	return 0;
}
