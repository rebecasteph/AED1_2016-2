/* Equipe 5
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Lucas Almeida  
	
	7. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V.
*/

#include <stdlib.h>
#include <stdio.h>

main() 
{
  
  int i1, j1, i, j, k, matriz[50][50], vetor[50], vetor2[50];
    
  printf("\n		MULTIPLICACAO DE MATRIZES\n\n");
  
  //Receber o tamanho da matriz
  printf("\n Matriz\n\n");
  printf("\n Digite o numero de linhas: ");
  scanf("%d", &i1);
  printf(" Digite o numero de colunas: ");
  scanf("%d", &j1);
  
  //receber os valores da matriz
    printf("\n Valores da Matriz\n\n");
    for (i=0; i<i1; i++) 
    {
      for(j=0; j<j1; j++) 
	  {
        printf(" Digite um valor para posicao[%d][%d] : ", (i+1), (j+1));
        scanf("%d", &matriz[i][j]);

      }

    }
    
    //receber valores do vetor
    printf("\n Valores do Vetor\n=====================\n\n");
    for (i=0; i<j1; i++) 
	{
        printf(" Digite um valor para [%d]: ", (j+1));
        scanf("%d", &vetor[i]); 
    }
    
    //multiplicar a matriz pelo vetor
    for (i=0;i<i1; i++) 
	{
		vetor2[i] = 0;
      for (j=0; j<j1; j++) 
	  {
          vetor2[i] = vetor2[i] + (matriz[i][j] * vetor[j]); 
      }
    
    }

    printf("\n	Vetor Final\n\n");

    for (i=0; i<i1; i++) 
	{
        printf("%d ",vetor2[i]);
      	printf("\n");
	}
  
  return(0);  

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
