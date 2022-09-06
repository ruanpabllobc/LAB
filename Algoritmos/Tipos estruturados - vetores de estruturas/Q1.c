#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso{  //estrutura para o ingresso
	float preco;
	char local[100];
	char atracao[100];
} Ingresso;  //renomeando

void preencha(Ingresso* i){  //fun��o para preencher os valores
	printf("Informe o preco do ingresso: \n");
	scanf("%f", &i->preco);  //lendo o pre�o
	printf("Local: \n");
	scanf("%s", i->local);  //lendo o local
	printf("Atracao: \n");
	scanf("%s", i->atracao); //lendo a atra��o
}

void imprima(Ingresso* i){  //fun��o para imprimir
	printf("Preco: %.1f\n", i->preco);  //imprimindo o pre�o
	printf("Local: %s\n", i->local);  //imprimindo o local
	printf("Atracao: %s\n", i->atracao);  //imprimindo a atra��o
}

void altera_preco(Ingresso* i, float valor){  //fun��o para alterar o pre�o
	
	i->preco = valor; //pre�o recebendo o novo valor
	
	printf("Novo valor do ingresso: %.1f\n", valor);  //imprimindo novo valor
}

void imprime_menor_maior_preco(int n, Ingresso* vet){  //fun��o para saber o maior e menor pre�o
//declara��o de vari�veis
	int i; 
	float maior;
	float menor;
	
	printf("Informe quantos ingressos deseja ler: \n");
	scanf("%d", &n);  //lendo quantos ingressos quer ler
	
	for(i = 0; i < n; i++){  //percorrendo o vetor
		printf("Informe o preco do ingresso: \n");
		scanf("%f", &vet->preco);  //pre�o do ingresso
		printf("Local: \n");
		scanf("%s", vet->local);  //local
		printf("Atracao: \n");
		scanf("%s", vet->atracao);  //atra��o
		
		if(vet->preco < menor){  //se for menor que a vari�vel menor
			menor = vet->preco;  //menor recebe o pre�o
			printf("Menor valor: %.1f\n", menor);  //imprimindo o menor valor
			printf("Local de ingresso mais barato: %s\n", vet->local);  //imprimindo o local  
		}	
		if(vet->preco > maior){ //se for maior que a vari�vel maior
			maior = vet->preco; //maior recebe o pre�o
			printf("Maior valor: %.1f\n", maior); //imprimindo o maior valor
			printf("Local de ingresso mais caro: %s\n", vet->local); //imprimindo o local
		}
	} 
}

int main(){
	//declara��o de vari�veis
	Ingresso* I;
	float novo;
	int n;
	
	preencha(&I);  //chamando a fun��o que preenche
	
	printf("\n");
	
	imprima(&I); //chamando a fun��o que imprime
	
	printf("Informe o novo valor do ingresso: \n");
	scanf("%f", &novo);  //lendo um novo valor para o ingresso
	
	altera_preco(&I, novo); //chamando a fun��o que altera o pre�o
	
	printf("\n");
	
	imprime_menor_maior_preco(n, &I); //chamando a fun��o que imprime o maior e menor ingresso
	
	return 0;
}