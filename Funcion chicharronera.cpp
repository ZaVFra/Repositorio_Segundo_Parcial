#include <stdio.h>
#include <math.h>

void raices(float a, float b, float c)
{
	float x1, x2;
	if (b*b-4*a*c < 0)
	printf("No hay solucion");
	else
	{
		x1 = (-b+sqrt(b*b-4*a*c))/(a*2);
		x2 = (-b-sqrt(b*b-4*a*c))/(a*2);
		printf("Raices: %f y %f",x1,x2);
		
	}
}

int main(){
	float a,b,c;
	printf("Ingresa los 3 coeficientes a, b y c: ");
	scanf("%f %f %f", &a,&b,&c);
	raices(a,b,c);
}
