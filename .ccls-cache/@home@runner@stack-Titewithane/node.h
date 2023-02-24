//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node *NodePtr;

/*void push(NodePtr* top, int x){
  NodePtr newnode = (NodePtr)malloc(sizeof(Node));
  if(newnode){ //if(newnode) is if(newnode != NULL)
    newnode -> data = x;
    newnode -> nextPtr = *top; //newnode target address where top target before add newnode.
    *top = newnode;
  }
}


int pop(NodePtr* top){
  NodePtr t = *top;
  if(t){
    int value = t -> data;
    *top = t -> nextPtr;
    free(t);
    return value;
  }
  printf("Empty Stack.");
  return 0;
}*/



#endif
