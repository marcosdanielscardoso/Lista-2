#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void geraVetor(int v[], int n){
	int i;
	srand(time(NULL));// inicializa gerador de numeros
	for(i=0;i<n;i++)
		v[i] = rand()%10;
}
//---------------------------------
void mostraVetor(int v[], int n){
	int i;
	for(i=0;i<n;i++)
	   printf("%d |", v[i]);
	printf("\n");   
}
//---------------------------------
void leiaVetor(int v[], int n){
	int i;
	for(i=0;i<n;i++){
	   printf("v[%d]:",i);
	   scanf("%d",&v[i]);
	}// fim for
	printf("\n");   
}
//-------------------------------
void leiaVetorChar(char v[], int n){
	int i;
	for(i=0;i<n;i++){
	   printf("v[%d]:",i);
	   scanf("%c",&v[i]);
	}// fim for
	printf("\n");   
}
//---------------------------------
void mostraVetorChar(char v[], int n){
	int i;
	for(i=0;i<n;i++)
	   printf("%c |", v[i]);
	printf("\n");   
}
