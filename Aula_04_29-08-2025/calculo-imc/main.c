#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double peso;
	double altura;
	double imc;
	
	printf("Qual o seu peso em kg? ");
	scanf("%lf", &peso);
	
	printf("Quantos metros de altura voce tem? (Use ponto ao invés de virgula) ");
	scanf("%lf", &altura);
	
	imc = peso/(altura*altura);
	
	if (imc < 20) {
		printf("Abaixo do peso :(");
	} else if (imc >= 20 && imc < 30) {
		printf("Peso ideal :)");
	} else if (imc >= 30 && imc < 35) {
		printf("Obeso mano :(");
	} else {
		printf("Muito obeso :((");
	}
	
	return 0;
}

