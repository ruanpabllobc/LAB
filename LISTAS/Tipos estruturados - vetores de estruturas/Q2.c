#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
	int matricula;
	char nome[80];
	char turma;
	float notas[3];
	float media;
} Aluno;

void matricula(int n, Aluno* alunos){
	int i;
	
	printf("Informe a quantidade de alunos que deseja matricular: \n");
	scanf("%d", &n);
	
	alunos = (Aluno*)malloc(n*sizeof(Aluno));
	
	if(alunos == NULL){
		printf("memoria insuficiente!\n");
		exit(1);
	}
	
	for(i = 0; i < n; i++){
		if(n > 10){
			printf("Nao temos mais vagas!\n");
			system("pause\n");
			exit(1);
		}
		printf("Matricula do aluno: \n");
		scanf("%d", &alunos->matricula[i]);
		printf("Nome: \n");
		scanf("%s", alunos->nome[i]);
		printf("Turma: \n");
		scanf("%s", alunos->turma[i]);
	}
	
	free(alunos);
}

void lanca_notas(int n, Aluno* alunos){
	int i;
	
	for(i = 0; i < n, i++){
		printf("Digite as notas: \n");
		scanf("%f", &alunos->notas[i]);
		alunos->media = (alunos->media + alunos->notas[i])/3
	}
	printf("Media: %.1f\n", alunos);
}

void imprime_tudo(int n, Aluno* alunos){
	int i;
	
	for(i = 0; i < n; i++){
		printf("Matricula: %d\n", alunos->matricula);
		printf("Nome: %s\n", alunos->nome);
	}
}

void imprime_turma(int n, Aluno* alunos, char turma){
	int i;
	
	for(i = 0; i < n; i++){
		printf("Matricula: %d\n", alunos->matricula);
		printf("Nome: %s\n", alunos->nome);
		printf("Turma: %s\n", alunos->turma);
	}
}

void imprime_turma_aprovados(int n, Aluno* alunos, char turma){
	int i;
	
	for(i = 0; i < n; i++){
		printf("Turma: %s\n", alunos->turma);
		
		if(alunos->media >= 7){
			printf("Aluno aprovado!\n");
			printf("Turma: %s\n", alunos->turma);
		}
		else{
			printf("Aluno reprovado!\n");
			printf("Turma: %s\n", alunos->turma);
		}
	}
}
int main(){
	
	Aluno* a;
	int n;
	char t;
	
	matricula(n, &a);
	printf("\n");
	lanca_notas(n, &a);
	printf("\n");
	imprime_tudo(n, &a);
	printf("\n");
	imprime_turma(n, &a, t);
	printf("\n");
	imprime_turma_aprovados(n, &a, t);
	
	return 0;
}