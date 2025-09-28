#include <stdio.h>
#include <stdlib.h>

struct Endereco {
    char rua[50];
    int numero;
    char cidade[50];
    char estado[30];
    char cep[10];
};

struct Livro {
char titulo[50];
char autor[50];
int ano;
char ISBN[50];
};

struct Biblioteca {
char nome[50];
struct Endereco enderecoBiblioteca;
struct Livro livroBiblioteca;
};

int main() {
    struct Endereco enderecoBiblioteca = {"Av. da Prefeitura", 150, "Agrestina", "Pernambuco", "55495-000"};
    struct Livro livroBiblioteca = {"Biblia", "Os dicipulos de Jesus", 0, "9789531101134"};
   
    struct Biblioteca bibliotecaDoCentro = {"Biblioteca da Prefeitura", enderecoBiblioteca, livroBiblioteca};

    printf("Bibioteca: %s\n", bibliotecaDoCentro.nome);
    printf("Endereco: %s, %d, %s, %s, %s\n",
		bibliotecaDoCentro.enderecoBiblioteca.rua, bibliotecaDoCentro.enderecoBiblioteca.numero, bibliotecaDoCentro.enderecoBiblioteca.cidade,
		bibliotecaDoCentro.enderecoBiblioteca.estado, bibliotecaDoCentro.enderecoBiblioteca.cep
	);
	printf("Livro Cadastrado: %s \n", bibliotecaDoCentro.livroBiblioteca.titulo);
	printf("Ano de Publicacao: %d \n", bibliotecaDoCentro.livroBiblioteca.ano);
	printf("Autor do livro: %s \n", bibliotecaDoCentro.livroBiblioteca.autor);
	printf("ISBN: %s", bibliotecaDoCentro.livroBiblioteca.ISBN);

    return 0;
}
