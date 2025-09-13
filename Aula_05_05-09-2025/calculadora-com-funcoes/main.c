#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double soma(double a, double b);
double subtracao(double a, double b);
double multiplicacao(double a, double b);
double divisao(double a, double b);


int main(int argc, char *argv[]) {
	double num1;
	double num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%lf", &num1);
	printf("Digite o segundo numero: ");
	scanf("%lf", &num2);
	
	printf("Soma: %lf \n", soma(num1, num2));
	printf("Subracao: %lf \n", subtracao(num1, num2));
	printf("Multiplicacao: %lf \n", multiplicacao(num1, num2));
	printf("Divisao: %lf \n", divisao(num1, num2));
	return 0;
}

double soma(double a, double b) {
	return a + b;
}

double subtracao(double a, double b) {
	return a - b;
}

double divisao(double a, double b) {
	return a / b;
}

double multiplicacao(double a, double b) {
	return a * b;
}
