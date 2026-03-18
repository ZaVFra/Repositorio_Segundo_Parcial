/*
Impresión de una serie
*/
#include <stdio.h>
#include <math.h>

//prototipo de función
void imprimirSerie(int);
double sumaSerie(int);

int main(){
    int num;
    printf("Ingresa un número: ");
    scanf("%d", &num);
    imprimirSerie(num);
    printf("\nLa suma de la serie es %0.0lf\n", sumaSerie(num));
}

void imprimirSerie(int n) // no retunr, no devuelve
{
    for (int k=0;k<=n;k++)  {
        printf("%0.0lf ",(pow(2,k)));
    }
}

double sumaSerie(int n) // Sí devuelve, sí tiene return
{
    double s=0;
    for (int k=0;k<=n;k++)  {
        s = s + pow(2,k);
    }
    return s;
}
