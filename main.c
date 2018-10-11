#include "list.h"


int main() {

  printf("No node: NULL\n");
  print_list(NULL);

  printf("\nStarter node\n");
  struct node node1;
  node1.next = NULL;
  node1.value = 1;
  print_list(&node1);

  printf("\nInserting nodes 2 to 5:\n");
  struct node * node2 = insert_front( &node1, 2);
  print_list(node2);

  struct node * node3 = insert_front( node2, 3);
  print_list(node3);

  struct node * node4 = insert_front( node3, 4);
  print_list(node4);

  struct node * node5 = insert_front( node4, 5);
  print_list(node5);

  printf("\nInserting node6 in front of node2\n");
  struct node * node6 = insert_front( node2, 6);
  print_list(node6);

  print_list(node5);


  printf("\nFreeing the list\n");
  node4 = free_list(node4);
  print_list(node4);

  return 0;
}
