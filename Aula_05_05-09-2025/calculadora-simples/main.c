#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char operacao;
	float num1;
	float num2;
	
	while (true) {
		printf("Calculadora Simples \n");
		printf("Escolha uma operacao (+, -, *, /) ou 'a' para sair: ");
		scanf("%s", &operacao);
		
		if (operacao == '+') {
			printf("Digite o primeiro numero: ");
			scanf("%d", &num1);		
			printf("Digite o segundo numero: ");
			scanf("%d", &num2);
			printf("Resultado: %d \n", num1 + num2);
			
		} else if (operacao == '-') {
			printf("Digite o primeiro numero: ");
			scanf("%d", &num1);
			printf("Digite o segundo numero: ");
			scanf("%d", &num2);
			printf("Resultado: %d \n", num1 - num2);
			
		} else if (operacao == '*') {
			printf("Digite o primeiro numero: ");
			scanf("%d", &num1);
			printf("Digite o segundo numero: ");
			scanf("%d", &num2);
			printf("Resultado: %d \n", num1 * num2);
			
		} else if (operacao == '/') {
			printf("Digite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);
			printf("Resultado: %f \n", num1 / num2);
			
		} else if (operacao == 'a') {
			printf("Fechando o sistema.");
			break;
		} else{
			printf("Caractere invalido \n \n");
		}
	}
	
	return 0;
}
