#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int estoqueInicial = 100;

int main(int argc, char *argv[]) {
	int quantidadeAtualEstoque;
	int quantidadeAdicionarEstoque;
	int quantidadeRemoverEstoque;
	
	printf("Estoque inicial: %d \n", estoqueInicial);
	printf("Digite a quantidade de itens para adicionar ao estoque: ");
	scanf("%d", &quantidadeAdicionarEstoque);
	
	quantidadeAtualEstoque = estoqueInicial + quantidadeAdicionarEstoque;
	printf("Estoque apos adicao: %d \n", quantidadeAtualEstoque);
	printf("Digite a quantidade de itens para remover do estoque: ");
	scanf("%d", &quantidadeRemoverEstoque);
	quantidadeAtualEstoque = quantidadeAtualEstoque - quantidadeRemoverEstoque;
	printf("Estoque apos remocao: %d", quantidadeAtualEstoque);
	
	return 0;
}
