/*
 * tests.c
 *
 *  Created on: 26 de abr de 2016
 *      Author: rodrigo
 */

#include "tests.h"
#include "leftist_heap.h"
#include "union_find.h"
#include <stdio.h>
void test_leftist_heaps(){
	leftist_node * raiz = create_new_leftist_node(0);

	int i;
	for (i = 1; i <= 4; i++){
		raiz = insert(i, raiz);
	}
	pre_ordem(raiz);
}

void test_union_find(){
	int i;
	uf_node * v [10];
	for (i = 1; i <= 10; i++){
		make_set(v[i - 1] = create_new_uf_node(i));
	}
	for (i = 1; i <= 10; i++){
		printf ("%d\n", find (v[i - 1])->item);
	}

	v[2] = link(v[2], v[9]);
	for (i = 1; i <= 10; i++){
			printf ("%d\n", find (v[i - 1])->item);
	}

}
