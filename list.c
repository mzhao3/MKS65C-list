#include <stdlib.h>

struct node { int i; struct node *next; };


// Should take a pointer to a node struct and print out all of the data in the list
void print_list(struct node *) {
  printf( "Stored value: %d\n", node.i);
  printf( "Address of next node: %p\n", node.next)
}


//Should take a pointer to the existing list and the data to be added, create a
//  new node and put it at the beginning of the list.
//The second argument should match whatever data you contain in your nodes.
//Returns a pointer to the beginning of the list.
struct node * insert_front (struct node * prevFront, int x) {
   struct node * node1 = malloc(sizeOf(struct node));

  //    malloc(i);
   // malloc(next);
   node.i = x;
   node.next = prevFront;
   return node1;

 }

struct node * free_list(struct node*);

int main() {
  return 0;
}
