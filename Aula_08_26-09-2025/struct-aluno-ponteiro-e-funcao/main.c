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

	printf("--- Nota Original --- \n");
	printf("Nome: %s \n", ponteiro->nome);
	printf("Nota: %f", ponteiro->nota);
	
	printf("\n\n... Nota Alterada para 9,8 via funcao ...");
	alterarNota(ponteiro, 9.8);
	
	printf("\n\n--- Nota Alterada ---");
	printf("\nNome: %s", ponteiro->nome);
	printf("\nNota: %f", ponteiro->nota);
	
	return 0;
}

void alterarNota(struct Aluno *ponteiro, double nota) {
	ponteiro->nota = nota;
}
