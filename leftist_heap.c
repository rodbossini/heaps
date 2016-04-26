/*
 * leftist_heap.c
 *
 *  Created on: 13 de abr de 2016
 *      Author: rodrigo
 */


#include "leftist_heap.h"
#include <stdlib.h>
#include <stdio.h>

leftist_node * create_new_leftist_node (int key){
	leftist_node * aux = malloc (sizeof (leftist_node));
	aux->left = NULL;
	aux->right = NULL;
	aux->rank = 1;
	aux->key = key;
	return aux;
}


leftist_node * find_min (leftist_node * h){
	return h;
}

leftist_node * meld (leftist_node * h1, leftist_node * h2){
	if (h1 == NULL)
		return h2;
	if (h2 == NULL)
		return h1;
	return mesh (h1, h2);
}

leftist_node * mesh (leftist_node * h1, leftist_node * h2){
	if (h1->key > h2->key){
		leftist_node * aux = h1;
		h1 = h2;
		h2 = aux;
	}
	if (h1->right == NULL){
		h1->right = h2;
	}
	else{
		h1->right = mesh (h1->right, h2);
	}

	if (h1->left == NULL || h1->left->rank < h1->right->rank){
		leftist_node * aux = h1->left;
		h1->left = h1->right;
		h1->right = aux;
	}
	h1->rank = (h1->right == NULL ? 1 : h1->right->rank + 1);
	return h1;
}

leftist_node * insert (int key , leftist_node * h){
	leftist_node * novo = create_new_leftist_node(key);
	return meld (novo, h);
}

void pre_ordem (leftist_node * h ){
	if (h == NULL)
		return;
	printf ("%d\n", h->key);
	fflush(stdout);
	pre_ordem (h->left);
	pre_ordem (h->right);
}


