/*
 * main.c
 *
 *  Created on: 13 de abr de 2016
 *      Author: rodrigo
 */

#include "leftist_heap.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {

	leftist_node * raiz = create_leftist_node(0);

	int i;
	for (i = 1; i <= 4; i++){
		raiz = insert(i, raiz);
	}
	pre_ordem(raiz);

}
