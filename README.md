# ElevarCubo

Instale o Dev++; Sistema operacional windows; Desenvolvido em C Autor: Ismael Data: 05-11-2021

void cubo(float a){ 
	float cubo; variavel
	cubo = (a*a*a);  //processo,ação que será gerada com as informações do usuario
	printf("a valor de %f eh %f",a,cubo);  //mostrando a numero ao cubo, irá exibir os numeros após os processo
	
} 
	int main()
{
	float valor; 
  
	printf("digite o valor:n/"); //solicitação de informação, irá exibir na tela uma solicitação de informação
		scanf("%f", &valor);  //entrada de informação, aonde o usuario irá colocar a informação desejada 
	
	cubo(valor);  
	
	return 0;
}
