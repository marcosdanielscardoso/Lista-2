#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i, elementos,op,r,pares=0,soma=0,result;
	srand(time(NULL));
	
	printf("Digite o numero de elementos do vetor: ");
	scanf("%d",&elementos);
	printf("Deseja ler ou gerar &d elementos no vetor? [ler = 1 / gerar = 2]", elementos);
	scanf("%d",&op);
	int vetor[elementos];
	if(op == 1){
	
	for(i=0;i<elementos;i++){
		scanf("%d",&vetor[i]);
		
	}
  }
    else{
  	for(i=0;i<elementos;i++){

  	    	r = rand()%10;
  	    	vetor[1] = r;
	    }
    }
	for(i=0; i<elementos;i++){
		if(vetor[i]%2 == 0){
			pares++;
			soma+=vetor[i];
		}
	}
	result = soma/pares;
	printf("MEDIA = %d",result);
}
