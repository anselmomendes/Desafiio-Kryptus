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

struct lista {
	int data;
	struct lista* prox;
};

//tipo de dado
typedef struct lista Lista;

//Cria a pilha
Lista* cria_lista(void);

//Enserir um item na lista
void put(Lista** l, int i);

//Recuperar um item da lista
Lista* get(Lista* l);

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

Lista* l = cria_lista();

put(&l,3);
put(&l,7);
put(&l,2);
get(&l);
put(&l,8);



	return EXIT_SUCCESS;
}

Lista* cria_lista(void) {
	Lista* l = (Lista*) malloc(sizeof(Lista));
	l->data = NULL;
	return l;
}

void put(Lista** l, int i) {
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	if( novo == NULL ) {
		printf("Memoria insuficiente!\n");
		exit(1);
	}
	novo->data = i;
	novo->prox = *l;
	*l = novo;
	printf("put %d\n", i);
}

Lista* get(Lista* l){
	if(l == NULL){
		printf("Lista Vazia!\n");
		exit(1);
	}
	printf("get %d\n",&l->data);
	return l->prox;

}

void list(Lista* l) {
	Lista* aux;
	printf("list\n");
	for(aux = l; aux != NULL; aux = aux->prox) {
		printf("%d ", aux->data);
	}
}
