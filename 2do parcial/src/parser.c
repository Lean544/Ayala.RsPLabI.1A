/*
 * parser.c
 *
 *  Created on: 7 dic. 2022
 *      Author: ayala
 */
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "post.h"

int parser_postFromText(FILE* pFile , LinkedList* pArrayListJugador)
{
	int retorno=-1,cantidad;
	char bufferPost[6][200];
	Post* unPost=NULL;

	if(pFile!=NULL && pArrayListJugador!=NULL){

		fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",bufferPost[0],bufferPost[1],bufferPost[2],
				bufferPost[3],bufferPost[4],bufferPost[5]);

		while(!feof(pFile))
		{

			cantidad=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",bufferPost[0],bufferPost[1],
					bufferPost[2],bufferPost[3],bufferPost[4],bufferPost[5]);

			if(cantidad<0){
				//jug_delete(unJugador);
				unPost=NULL;
				retorno=-1;
				printf("ERROR");
				break;
			}else{
			//if(cantidad>0){
				unPost=post_newParametros(bufferPost[0],bufferPost[1],bufferPost[2],
						bufferPost[3],bufferPost[4]);
				//Post* post_newParametros(char* idStr,char* user,char* likes, char* dislikes, char* followers);
				if(unPost!=NULL){
					ll_add(pArrayListJugador,(Post*)unPost);

				}
				retorno=0;
			//}else{
			//	printf("Error leyendo :(");
			}

		}

	}
    return retorno;
}


