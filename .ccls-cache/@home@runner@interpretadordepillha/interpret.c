#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lista.h"
#include "interpret.h"
#include "stack.h"

Stack *s;
Lista *l;

void interpreter_init () {
  s = new_stack(100);
}


void interpret (const char *source) {
    char op[10];
    char arg[10];

    sscanf (source, "%s%s", op, arg);
    printf("operação: %s\n", op);
    printf("argumento: %s\n",  arg);

    if (strcmp(op, "push") == 0 ) {
          int value = atoi (arg);
          stack_push(s, value);
      
      } else if  (strcmp(op, "add") == 0 ) {
          int arg1 = stack_pop(s);
          int arg2 = stack_pop(s);
          int soma = arg1 + arg2;
          stack_push(s, soma);
    
      } else if  (strcmp(op, "sub") == 0 ) {
          int arg1 = stack_pop(s);
          int arg2 = stack_pop(s);
          int sub = arg1 - arg2;
          stack_push(s, sub);
    
      } else if  (strcmp(op, "mult") == 0 ) {
          int arg1 = stack_pop(s);
          int arg2 = stack_pop(s);
          int mult = arg1 * arg2;
          stack_push(s, mult);
    
      } else if  (strcmp(op, "div") == 0 ) {
          int arg1 = stack_pop(s);
          int arg2 = stack_pop(s);
          int div = arg1 / arg2;
          stack_push(s, div);
    
      } else if  (strcmp(op, "print") == 0 ) {
          printf("%d\n", stack_pop(s));
      
      } else if (strcmp (op, "pop")==0){
      int arg1 = stack_pop(s);
      if(lista_exist(l,arg)) {
        lista_set(l,arg,arg1);
      }else {
        lista_append(l, arg, arg1);
      }
      }
   stack_print(s);
  
}