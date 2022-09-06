#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){ //parametros da função
	int frequencia;
	
	frequencia = (faltas/aulas)*100; //percentual de frequencia
	*media = (p1 + p2 + p3)/3; //media
	
	if(frequencia<=25 && *media>=6){ //situação do aluno
		printf("APROVADO \n");
		return 'A'; //retorno para o usuário
	}else if(frequencia<=25 || *media<6){
		printf("REPROVADO \n");
		return 'R'; //retorno para o usuário
	}else{
		printf("REPROVADO POR FALTAS \n");
		return 'F'; //retorno para o usuário
		}
}

int main(void){
	setlocale(LC_ALL, "Portuguese"); //uso de acentuação
    float p1, p2, p3, media; //variavéis
    int faltas, aulas, R;
    
    printf("Insira as notas:\n");
    scanf("%f %f %f", &p1, &p2, &p3);
    printf("Insira as faltas: \n");
    scanf("%d", &faltas);
	printf("Insira o total de aulas: \n");
    scanf("%d", &aulas);
    
    R = situacao(p1, p2, p3, faltas, aulas, &media); //chamando a função com seus parametros
    
    printf("%.1f", media); //imprimindo a media com 1 casa decimal após o '.'
    
    return 0;
}