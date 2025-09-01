#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const double pi = 3.1416;
	int raio = 10;
	double areaCirculo = pi * raio * raio;
	
	printf("Com o raio de %d metros, a area do circulo e: %.2lf", raio, areaCirculo);
	
	return 0;
}

