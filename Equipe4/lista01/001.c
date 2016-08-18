/*Equipe 4: 

Jefferson Avilar
Matheus Obando
Fabíola Maciel

1. Reescreva o programa abaixo usando ponteiros
 
int main ()
{
float matrx [50][50]; int i,j;
for (i=0;i<50;i++)
for (j=0;j<50;j++) matrx[i][j]=0.0;
return(0); 
}	*/

		
#include<stdio.h>
#include<stdlib.h>
#define LINHA 50
#define COLUNA 50

int main()
{

  float **matriz;
  int i,j;


	matriz=(float**)calloc(LINHA,sizeof(float*));

  if(matriz==NULL)
    {
      printf("Erro: memoria insuficiente.");
      return (1);
    }

  for (i=0;i<50;i++)
    matriz[i]=(float*)calloc(COLUNA,sizeof(float));

  if (matriz[i]==NULL)
    {
      printf("Erro: memoria insuficiente");
      return(1);
    }

  for (i=0;i<LINHA;i++){
    for (j=0;j<COLUNA;j++){
      matriz[i][j]=0.0;
    }
  }

  free(matriz);

  return (0);

}
