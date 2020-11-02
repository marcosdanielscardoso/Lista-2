#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 10


int main(){

int nAlunos, i, j, questaoCerta;
char vGabarito[TAM], respostaAluno;

printf("Digite o n� de alunos:");
scanf("%d", &nAlunos);

printf("Gabarito da prova:\n");
for(i = 0; i < TAM; i++)
	{
	printf("Resposta da quest�o %d: ", i+1);
	scanf(" %c", &vGabarito[i]);	
	}

for(i = 0; i < nAlunos; i++)
	{
	questaoCerta = 0;	
	printf("Aluno %d:\n", i+1);	
	for(j = 0; j < TAM; j++)
		{
		printf("Digite a resposta da quest�o %d:", j+1);
		scanf(" %c", &respostaAluno);	
			if(respostaAluno == vGabarito[j]) //Caso a resposta do aluno seja igual a do gabarito.
			{
			questaoCerta++;	//Soma +1 na quantidade de quest�es do aluno.
			}
		}
		printf("Aluno %d acertou %d quest�es.", i+1, questaoCerta);
	}

return 0;	
}
