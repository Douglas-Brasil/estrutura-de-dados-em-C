#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Produto {
	int codigo;
	char descricao[100];
	double preco;
};

int main(int argc, char *argv[]) {
	int quantidadeProdutos;
	int contadorCadastrarProdutos = 1;
	int contadorListarProdutos = 0;
	
	printf("Quantos produtos voce deseja cadastrar? ");
	scanf("%d", &quantidadeProdutos);
	
	struct Produto *listaProdutos = (struct Produto *) malloc(quantidadeProdutos * sizeof(struct Produto));
	
	struct Produto novoProduto;
	while (contadorCadastrarProdutos <= quantidadeProdutos) {
		printf("\n\n--- Produto %d ---", contadorCadastrarProdutos);
		printf("\nCodigo: ");
		scanf("%d", &novoProduto.codigo);
		printf("Descricao: ");
		scanf("%s", novoProduto.descricao);
		printf("Preco: ");
		scanf("%lf", &novoProduto.preco);
		
		listaProdutos[contadorCadastrarProdutos-1] = novoProduto;
		contadorCadastrarProdutos++;
	}
	
	printf("\n\n--- Lista de produtos cadastrados ---");
	while (contadorListarProdutos < contadorCadastrarProdutos) {
		printf("\nCodigo: %d", listaProdutos[contadorListarProdutos].codigo);
		printf("\nDescricao: %s", listaProdutos[contadorListarProdutos].descricao);
		printf("\nPreco: %lf \n\n", listaProdutos[contadorListarProdutos].preco);
		contadorListarProdutos++;
	}
	
	free(listaProdutos);
	return 0;
}
