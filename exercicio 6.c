#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int i, controle = 0;
int n;
int vet[10];

printf("intervalo da rand: [0,%d]\n", RAND_MAX);

srand(time(NULL));

for(i=0 ; i < 10; i++) {
    vet[i] = rand()%10;
    printf("Numero %d: %d\n", i, vet[i]);
}

printf ("digite um numero: ");
scanf ("%d", &n);

for (i=0; i<10; i++){
	if (n==vet[i]){
	   	printf ("Esta no vetor na posicao %d", i);
	   	controle = 1;
	   	break;
	}

}

if(!controle)
    printf ("Não esta no vetor");
}
