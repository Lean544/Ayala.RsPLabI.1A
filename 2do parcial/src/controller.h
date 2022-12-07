/*
 * controller.h
 *
 *  Created on: 7 dic. 2022
 *      Author: ayala
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

int controller_cargarPostsDesdeTexto(char* path , LinkedList* pArrayListPost);

int controller_listarPost(LinkedList* pArrayListJugador,int pos);

int controller_listarPosts(LinkedList* pArrayListJugador);

int map (LinkedList* list);

int guardarMejoresPosteos(LinkedList* list,char* path);

int guardarMasHateados(LinkedList* list,char* path);

int postMasPopular(LinkedList* list,char* path);
#endif /* CONTROLLER_H_ */
