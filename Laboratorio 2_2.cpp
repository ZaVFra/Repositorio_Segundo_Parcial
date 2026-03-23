#include <stdio.h>
int main(){
	int n, mes;
	float CA, r, interes;
	printf("Ingrese el capital inicial: ");
	scanf("%f", &CA);
	printf("A cuantos meses? ");
	scanf("%d", &n);
	printf("Ingerse el interes (Escala de 0 a 100): ");
	scanf("%f", &r);
	mes = 0;
	while(mes<=n)
	{
		printf("Periodo %d $%0.2f\n", mes, CA);
		interes = CA*(r/100)/12;
		printf("%0.2f\n", interes);
		CA = CA + interes;
		mes = mes + 1;
	}
	printf("Gracias por su preferencia!");
}
