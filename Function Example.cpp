#include <stdio.h>
#include <math.h>

float calcularImc(int peso, float est)
{
    float r = peso/(est*est);
    return r;
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
    printf("Come frutas y verduras");
}
