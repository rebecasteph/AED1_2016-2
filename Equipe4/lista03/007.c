#include <stdio.h>

int bs_sentinela(int sentinela, int v[], int n);

int main()
{

	int tam = 10; int v[tam];

	int pesquisar, i;

	scanf("%d", &pesquisar);

	for (i = 0; i < tam; i++)
		scanf("%d", &v[i]);

	for (i = 0; i < tam; i++)
		printf("%d ", v[i]);

	printf("\n");

	printf("%d\n", bs_sentinela(pesquisar, v, tam));

	return 0;
}

int bs_sentinela(int sentinela, int v[], int n)
{
  int count = 0;
  v[n] = sentinela;

  while (v[count] != sentinela) {
    count++;
  }

  if (count < n)
  {
    return count;
  }

	return -1;
}
