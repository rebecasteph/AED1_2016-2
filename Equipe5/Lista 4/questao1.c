/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida

1) Crie uma agenda em forma de lista duplamente encadeada
- CRUD completo: inserir, deletar, atualizar, mostrar e listar
- dados nome, endereço, telefone e email
- a chave de busca será o número de telefone ( apenas números )
 */

//programa principal

#include "lista.h"
#include <stdio.h>
#include <string.h>

int main()
{
    int i, tel;
    char nome1[30], end1[30], email1[30];
    FILE *arquivo = fopen("agenda.txt", "r");

    primeiro = queue_create();
    ultimo = queue_create();

   for (i=0;i<2;i++)
    {
        scanf("%s", &nome1);
        scanf("%s", &end1);
        scanf("%d", &tel);
        scanf("%s", &email1);
        printf(" leu !\n");
        queue_insert(nome1, end1, tel, email1);
    }

    queue_print();
	queue_search(999999);

    queue_delete(88106011);
    queue_print();

    queue_update(999999);
    queue_print();

    fclose(arquivo);
    return 0;
}

