#include <stdio.h>
#include <stdlib.h>

struct Endereco {
	char rua[50];
	int numero;
	char cidade[50];
	char estado[50];
	int cep;
};

struct Livro {
	char titulo[50];
	char autor[50];
	int ano;
	int ISBN;
};

struct Biblioteca {
	char nome[50];
	struct Endereco endereco;
	struct Livro livro;
};
	
int main(int argc, char *argv[]) {
	
	struct Endereco enderecoBiblioteca = {"Rua dos Livros", 57, "Caruaru", "Pernambuco", 55014040};
	struct Livro livroBiblioteca = {"Estrutura de Dados", "Mauricio", 2025, 1122222334};
	struct Biblioteca bibliotecaMunicipal = {"Biblioteca Cheia de Livros", enderecoBiblioteca, livroBiblioteca};
	
	printf("Nome da Biblioteca: %s", bibliotecaMunicipal.nome);
	printf("\nEndereço: %s, Número: %d, Cidade: %s, Estado: %s, CEP: %d", 
	bibliotecaMunicipal.endereco.rua, bibliotecaMunicipal.endereco.numero, 
	bibliotecaMunicipal.endereco.cidade, bibliotecaMunicipal.endereco.estado, 
	bibliotecaMunicipal.endereco.cep);
	
	printf("\nLivro: %s, Autor: %s, Ano: %d, ISBN: %d", 
	bibliotecaMunicipal.livro.titulo, bibliotecaMunicipal.livro.autor, 
	bibliotecaMunicipal.livro.ano, bibliotecaMunicipal.livro.ISBN);
	
	return 0;
}

