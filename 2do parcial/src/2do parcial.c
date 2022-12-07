/*
 ============================================================================
 Name        : 2do.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "LinkedList.h"
#include "controller.h"

int main(void) {
	setbuf(stdout,NULL);
	int menu;



	LinkedList* listaPosts= ll_newLinkedList();
	do{
		utn_getNumero(&menu,"Que desea hacer?\n1)Cargar Archivo\n2)Imprimir Lista\n3)Asignar estadisticas\n"
				"4)Filtrar por mejores posteos\n5)Filtrar por haters\n6)Ordenar por cantidad de followers\n"
				"7)Mostrar al usuario mas popular\n8)Salir","Error",1,8,5);
		switch(menu){
			case 1:
				controller_cargarPostsDesdeTexto("posts.csv", listaPosts);
				break;
			case 2:
					controller_listarPosts(listaPosts);
				break;
			case 3:
					map(listaPosts);
				break;
			case 4:
				guardarMejoresPosteos(listaPosts,"mejoresPosts.csv");
				break;
			case 5:
				guardarMasHateados(listaPosts,"masHateados.csv");
				break;
			case 6:

				break;
			case 7:
				postMasPopular(listaPosts,"masPopular.csv");
				break;
			case 8:
				printf("Finalizando Programa");
				break;
		}

	}while(menu!= 8);


	return EXIT_SUCCESS;
}
