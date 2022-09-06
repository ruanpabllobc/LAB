#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro){ //função para saber a área e o perímetro
	
	*area = 3 * pow(l, 2) * sqrt(3)/2;  //cálculo para saber a área
	
	*perimetro = 6 * l;  //cálculo para saber o perímetro
}

int main(){
	
	float lado, a, p;  //declaração de variáveis
	
	printf("Informe o tamanho de l: \n");
	scanf("%f", &lado);  //lendo o tamanho
	
	calcula_hexagono(lado, &a, &p);  //chamando a função
	
	printf("area: %.1f\n", a);  //imprimindo o tamanho da área
	printf("perimetro: %.1f\n", p);  //imprimindo o tamanho do perímetro
	
	return 0;
}