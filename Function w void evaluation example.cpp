#include <stdio.h>
#include <math.h>

float calcularImc(int peso, float est)
{
    float r = peso/(est*est);
    return r;
}

void evaluar(float imc)
{
	if (imc<18.5)
		printf("Peso bajo \n");
	else if (imc<25)
			printf("Peso normal");
		else if (imc<30)
				printf("Sobrepeso");
			else
				printf("Obesidad");
}

int main(){
    int peso;
    float est, imc;
    printf("Da el peso: ");
    scanf("%d",&peso);
    printf("Da la estatura: ");
    scanf("%f",&est);
    imc = calcularImc(peso,est); //llamado
    printf("El indice es %0.2f\n",imc);
    evaluar(imc);
    printf("\nCome frutas y verduras");
}
