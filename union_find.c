/*
 * union_find.c
 *
 *  Created on: 26 de abr de 2016
 *      Author: rodrigo
 */


#include "union_find.h"
#include <stdlib.h>
void make_set (uf_node * x){
	x->rank = 0;
	x->p = x;
}

uf_node * find (uf_node * x){
	if (x != x->p)
		x->p = find (x->p);
	return x->p;
}

uf_node * link (uf_node * x, uf_node * y){
	if (x->rank > y->rank){
		uf_node * aux = x;
		x = y;
		y = aux;
	}
	else if (x->rank == y->rank){
		y->rank = y->rank + 1;
	}
	x->p = y;
	return y;

}

uf_node * create_new_uf_node (int item){
	uf_node * aux =  malloc (sizeof (uf_node));
	aux->item = item;
	return aux;
}

