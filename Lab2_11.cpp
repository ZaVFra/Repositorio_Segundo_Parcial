#include <stdio.h>
int main(){
	int n, cont, mult;
	printf("Ingresa un numero: ");
	scanf("%d",&n);
	cont = 1;
	while (cont<=10)
	{
		mult = n*cont;
		printf("%d x %d = %d\n",n, cont, mult);
		cont=cont+1;
	}
}
