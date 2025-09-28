#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Aluno {
	char nome[50];
	int matricula;
	float nota;
};
	
int main(int argc, char *argv[]) {
	
	struct Aluno aluno1;
	struct Aluno *ponteiro = &aluno1;
	
	printf("Digite o nome do aluno: ");
	scanf("%s", ponteiro->nome);
	
	printf("Digite a matricula: ");
	scanf("%d", &ponteiro->matricula);
	
	printf("Digite a nota: ");
	scanf("%f", &ponteiro->nota);

	printf("--- Dados do Aluno --- \n");
	printf("Nome: %s \n", ponteiro->nome);
	printf("Matricula: %d \n", ponteiro->matricula);
	printf("Nota: %lf", ponteiro->nota);
	

	
	return 0;
}
