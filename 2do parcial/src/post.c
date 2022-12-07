/*
 * post.c
 *
 *  Created on: 7 dic. 2022
 *      Author: ayala
 */
#include"post.h"
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

int post_setFollowers(Post* this,int followers){
	this->followers = followers;
	return 1;
}
int post_getFollowers(Post* this,int* followers){
	*followers = this->followers;
	return 1;
}

int post_setDislikes(Post* this,int dislikes){
	this->dislikes = dislikes;
	return 1;
}
int post_getDislikes(Post* this,int* dislikes){
	*dislikes = this->dislikes;
	return 1;
}

int post_setLikes(Post* this,int likes){
	this->likes = likes;
	return 1;
}
int post_getLikes(Post* this,int* likes){
	*likes = this->likes;
	return 1;
}

int post_setId(Post* this,int id){
	this->id = id;
	return 1;
}
int post_getId(Post* this,int* id){
	*id = this->id;
	return 1;
}

int post_setUser(Post* this,char* user){
	strcpy(this->user, user);
	return 1;
}
int post_getUser(Post* this,char** user){
	*user = this->user;
	return 1;
}

Post* post_newParametros(char* idStr,char* user,char* likes, char* dislikes, char* followers){

	Post* pPost = (Post*)malloc(sizeof(Post));

	post_setId(pPost, atoi(idStr));
	post_setUser(pPost, user);
	post_setLikes(pPost, atoi(likes));
	post_setDislikes(pPost, atoi(dislikes));
	post_setFollowers(pPost,atoi(followers));

	return pPost;
}
