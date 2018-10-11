#include <stdio.h>
#include <stdlib.h>
#include "list.h"


	// Should take a pointer to a node struct and print out all of the data in the list
	void print_list(struct node * n) {

     printf("start: ");

     while (n) {
       printf(" %d -> ", n->value);
       n = n->next;
     }

     printf(" :end \n");
	}


	//Should take a pointer to the existing list and the data to be added, create a
	// new node and put it at the beginning of the list.
	//The second argument should match whatever data you contain in your nodes.
	//Returns a pointer to the beginning of the list.
	struct node * insert_front (struct node * prevFront, int newValue) {
	   struct node * x = malloc(sizeof(struct node));

	    x->value = newValue;
	    x->next = prevFront;
	    return x;

	}
	//Should take a pointer to a list as a parameter and then go through the
  //entire list freeing each node and return a pointer to the beginning of the
  //list (which should be NULL by then).
	struct node * free_list(struct node * a) {

      struct node * traversor = a;
      struct node * nextNode;
      while (nextNode) {
        nextNode = traversor->next;
        free(traversor);
        traversor = nextNode;
      }
      traversor = NULL;
      return traversor;
  }
