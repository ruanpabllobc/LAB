#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double *vetor;  //variaveis
	int i, tam;
	
	vetor = (double*)malloc(tam*sizeof(double));  //alocando dinamicamente
	
	if(vetor == NULL){  //se a variavel for igual a nulo
		printf("memoria insuficiente!\n");  //imprimindo mensagem
		exit(1);  //encerrando o programa
	}
	
	printf("Informe o tamanho do vetor: \n");
	scanf("%d", &tam); //recebe do usuário o tamanho do vetor
	
	while(tam < 10){ //enquanto o usuário digitar um tamanho menor que 10
		printf("Error 404 not found\n"); //imprime a mensagem
		exit(1); //encerra o programa
	}
	
	for(i=0;i<10;i++){ //atribuindo valores de 0 a 100 para a posição 'i' do vetor
		vetor[i] = rand()%100;
	}
	
	for(i=0;i<10;i++){ //imprimindo os 10 primeiros vetores com valores aleatórios
		printf("%.1f", vetor[i]);
		printf("\n\n");
	}
	
	free(vetor); //liberando a memoria
	
	return 0;
}