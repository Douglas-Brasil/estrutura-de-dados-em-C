#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const double fatorConversao = 9.0/5.0;
	const double ajuste = 32;
	double temperaturaCelcius;
	double temperaturaFahrenheit;
	
	printf("Digite a temperatura em Celcius: ");
	scanf("%lf", &temperaturaCelcius);
	
	temperaturaFahrenheit = temperaturaCelcius * fatorConversao + ajuste;
	printf("%lf \n", fatorConversao);
	
	printf("A temperatura de %lf em Fahrenheit e %lf.", temperaturaCelcius, temperaturaFahrenheit);
	return 0;
}
