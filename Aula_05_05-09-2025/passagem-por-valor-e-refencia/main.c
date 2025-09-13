#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	passagemPorValor(num1, num2);
	
	printf("Apos troca por valor (nenhuma alteracao): a = %d, b = %d \n \n", num1, num2);
	
	passagemPorReferencia(&num1, &num2);
	
	printf("Apos troca por refencia (valores trocados): a = %d, b = %d", num1, num2);
	
	return 0;
}

void passagemPorValor(int a, int b) {
	a = b;
	b = a;
}

void passagemPorReferencia(int *a, int *b) {
	int temporaria = *a;
	*a = *b;
	*b = temporaria;
}
