
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, char value){
  NodePtr newnode = (NodePtr)malloc(sizeof(Node));
  if(newnode){
    newnode -> data = value;
    newnode -> nextPtr = s->top;
    s->top = newnode;
    s->size++;
  }
}
char pop(StackPtr s){
  NodePtr t = s->top;
  if(s->size > 0){
    char value = t->data;
    t = s->top;
    s->top = t -> nextPtr;
    s->size--;
    free(t);
    return value;
  }
}
void pop_all(StackPtr s){
  while(s->size > 0){
    pop(s);
  }
}
#endif
