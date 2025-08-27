#include <stdio.h>
#include <string.h>

struct livro {
    char titulo[50];
    char autor[50]; 
    int ano;
    float preco;
};

int main() {
    struct livro livroUsuario;
    
    char tituloLivro[50];
    char autorLivro[50];
    int anoLivro;
    float precoLivro;
    
    printf("Digite o titulo do livro (uma palavra): ");
    scanf("%s", tituloLivro);

    printf("Digite o nome do autor (uma palavra): ");
    scanf("%s", autorLivro);

    printf("Digite o ano do livro: ");
    scanf("%d", &anoLivro);

    printf("Digite o preco do livro: ");
    scanf("%f", &precoLivro);

    // copia os valores para a struct
    strcpy(livroUsuario.titulo, tituloLivro);
    strcpy(livroUsuario.autor, autorLivro);
    livroUsuario.ano = anoLivro;
    livroUsuario.preco = precoLivro;
    
    printf("\n--- Informacoes do livro ---\n");
    printf("Titulo: %s\n", livroUsuario.titulo);
    printf("Autor: %s\n", livroUsuario.autor);
    printf("Ano: %d\n", livroUsuario.ano);
    printf("Preco: R$ %.2f\n", livroUsuario.preco);
    
    return 0;
}

