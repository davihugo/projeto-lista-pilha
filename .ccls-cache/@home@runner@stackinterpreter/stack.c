#include "stack.h"
#include "stdlib.h"
#include "stdio.h"

struct stack {
  int* elements;
  int top;
};

Stack* new_stack(int size){
  Stack* s = (Stack*) malloc (sizeof(struct stack));
  s->elements = (int*) malloc(sizeof(int) * size);
  s->top = 0;
  return s;
}


void stack_push(Stack* s, int value){
  s->elements[s->top++] = value;  
}
int stack_pop (Stack* s){
  return s->elements[--s->top];
}

void stack_print(Stack* s){
  printf ("---------------- stack -------------\n");
  for (int i=0; i < s->top; i++) {
    printf ("%d\n", s->elements[i]);
  }
  
  printf ("---------------- stack -------------\n");
}
