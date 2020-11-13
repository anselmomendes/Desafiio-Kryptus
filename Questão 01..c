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

#Anselmo Mendes Oliveira

#tipo de dado
typedef struct lista Lista;

#Enserir um item na lista
void put();

#Recuperar um item da lista
Lista* get(Lista* l);

#Listar todos os items da lista
void list(Lista* l);

#Remover item da lista
void remove(Lista* l);

#Esvaziar lista
void clear(Lista* l);

#Recuperar o primeiro item da lista
void first(Lista* l);

#Recuperar o ultimo item da lista;
void last(Lista* l);

void print_entry(char *entry) {
	printf("You entered: %s\n", entry);
}

int main(int argc, char *argv[]) {
	char input[201];

	while(1) {
		printf("prompt> ");
		if (fgets(input, 200, stdin) == NULL) {
			printf("An error ocurred.\n");
			break;
		}

		if (strncmp(input, "exit\n", 5) == 0) {
			printf("Leaving. Good bye.\n");
			break;
		}

		print_entry(input);
	}

	return EXIT_SUCCESS;
}
