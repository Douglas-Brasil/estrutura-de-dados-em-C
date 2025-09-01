#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double nota;
	double somaNotas;
	double media;
	
	printf("Digite a sua primeira nota: ");
	scanf("%lf", &nota);
	somaNotas = nota;
	
	printf("Digite a sua segunda nota: ");
	scanf("%lf", &nota);
	somaNotas = nota + somaNotas;
	
	printf("Digite a sua terceira nota: ");
	scanf("%lf", &nota);
	somaNotas = nota + somaNotas;
	
	media = somaNotas/3;
	
	printf("Sua media e: %.1lf", media);
	
	return 0;
}

