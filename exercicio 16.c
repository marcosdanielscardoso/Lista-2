#include<stdio.h>
#inlcude<string.h>

int main(){
	char palavra[1000];
	int i, n;
	printf("palavra codificada:");
	fflush(stdin);
	gets(palavra);
	n=strlen(palavra);
	printf("tamanho da palavra:%d\n",n);
	for(i=0;i<n;i++){
		if(palavra[i]!='p')
		   printf("%c",palavra[i]);
		else
		  if(palavra[i-1]=='p'&&palavra[i+1]=='p')
		  printf("%c",palavra[i]);
	}
	
	return 0;
}
