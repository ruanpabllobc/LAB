#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro){ //fun��o para saber a �rea e o per�metro
	
	*area = 3 * pow(l, 2) * sqrt(3)/2;  //c�lculo para saber a �rea
	
	*perimetro = 6 * l;  //c�lculo para saber o per�metro
}

int main(){
	
	float lado, a, p;  //declara��o de vari�veis
	
	printf("Informe o tamanho de l: \n");
	scanf("%f", &lado);  //lendo o tamanho
	
	calcula_hexagono(lado, &a, &p);  //chamando a fun��o
	
	printf("area: %.1f\n", a);  //imprimindo o tamanho da �rea
	printf("perimetro: %.1f\n", p);  //imprimindo o tamanho do per�metro
	
	return 0;
}