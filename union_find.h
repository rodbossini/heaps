/*
 * union_find.h
 *
 *  Created on: 26 de abr de 2016
 *      Author: rodrigo
 */

#ifndef UNION_FIND_H_
#define UNION_FIND_H_


typedef struct uf_node{
	struct uf_node * p;
	int rank;
	int item;

}uf_node;

void make_set (uf_node *);

uf_node * find (uf_node *);

uf_node * link (uf_node *, uf_node *);

uf_node * create_new_uf_node (int);


#endif /* UNION_FIND_H_ */
