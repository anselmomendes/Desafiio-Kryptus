/*
 ============================================================================
 Name        : Questão 1.
 Author      : Anselmo Mendes Oliveira
 Version     : 1.0.0
 Copyright   : Kryptus
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tipo de dado
typedef struct lista Lista;

//Enserir um item na lista
void put();

//Recuperar um item da lista
Lista* get(Lista** l);

//Listar todos os items da lista
void list(Lista* l);

//Remover item da lista
void remove_lista(Lista* l);

//Esvaziar lista
void clear(Lista* l);

//Recuperar o primeiro item da lista
void first(Lista* l);

//Recuperar o ultimo item da lista;
void last(Lista* l);




int main(int argc, char *argv[]) {

struct lista {
	int info;
	struct lista* prox;
};

Lista* a;


	return EXIT_SUCCESS;
}

void put(Lista** l, int i) {
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	if( novo == NULL ) {
		printf("Memoria insuficiente!\n");
		exit(1);
	}
	novo->info = i;
	novo->prox = *l;
	*l = novo;
	printf("put %d", i);
}

void list(Lista* l) {
	Lista* aux;
	printf("list\n");
	for(aux = l; aux != NULL; aux = aux->prox) {
		printf("%d ", aux->info);
	}
}
