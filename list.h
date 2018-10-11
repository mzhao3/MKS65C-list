#include <stdio.h>
#include <stdlib.h>


struct node { int value; struct node *next; };

void print_list(struct node * n);

struct node * insert_front(struct node * n, int new_value);

struct node * free_list(struct node * x);
