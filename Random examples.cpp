#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a,b,r;
    srand(time(NULL));
    do {
    a = 1+rand()%10;
    b = 1+rand()%10;
    printf("Cuanto es %d por %d ?",a,b);
    scanf("%d",&r);
	}while(r!=0);
	printf("Bye");
}
