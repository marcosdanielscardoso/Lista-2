#include<stdio.h>
#include"bibliotecaVetor.h"

int main(){
	char dna[50],complementar[50];
	int n,i;
	printf("Quantidade de base de sequencia de DNA: ");
	fflush(stdin);
	scanf("%d",&n);
	//leiaVetorChar(dna,n);
	gets(dna);
	mostraVetorChar(dna,n);
	for(i=0;i<n;i++){
		switch(dna[i]){
			case 'T': complementar[i]='A';
			break;
			case 'A': complementar[i]='T';
			break;
			case 'C': complementar[i]='G';
			break;
			case 'G': complementar[i]='C';
			break;
		}
	}
	//printf("dita complementar do DNA:");
	mostraVetorChar(complementar,n);
	return 0;
}

