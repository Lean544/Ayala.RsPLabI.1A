/*
 * post.h
 *
 *  Created on: 7 dic. 2022
 *      Author: ayala
 */

#ifndef POST_H_
#define POST_H_

typedef struct
{
	int id;
	char user[30];
	int likes;
	int dislikes;
	int followers;
}Post;

int post_setFollowers(Post* this,int followers);

int post_getFollowers(Post* this,int* followers);

int post_setDislikes(Post* this,int dislikes);

int post_getDislikes(Post* this,int* dislikes);

int post_setLikes(Post* this,int likes);

int post_getLikes(Post* this,int* likes);

int post_setId(Post* this,int id);

int post_getId(Post* this,int* id);

int post_setUser(Post* this,char* user);

int post_getUser(Post* this,char** user);

Post* post_newParametros(char* idStr,char* user,char* likes, char* dislikes, char* followers);
#endif /* POST_H_ */
