/*
 * leftist_heap.h
 *
 *  Created on: 13 de abr de 2016
 *      Author: rodrigo
 */

#ifndef LEFTIST_HEAP_H_
#define LEFTIST_HEAP_H_

typedef struct leftist_node{
	struct leftist_node * left;
	struct leftist_node * right;
	int rank;
	int key;
}leftist_node;


leftist_node * create_leftist_node (int);

leftist_node * find_min (leftist_node *);

leftist_node * meld (leftist_node *, leftist_node *);

leftist_node * mesh (leftist_node *, leftist_node *);

leftist_node * insert (int , leftist_node *);

leftist_node * delete_min (leftist_node *);

leftist_node ** list_min (float , leftist_node *);

leftist_node * heapify (leftist_node **);

void pre_ordem (leftist_node *);

#endif /* LEFTIST_HEAP_H_ */
