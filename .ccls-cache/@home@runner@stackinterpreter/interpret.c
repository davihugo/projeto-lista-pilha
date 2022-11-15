#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "interpret.h"
#include "stack.h"

Stack *s;

void stack_init () {

}


void interpret (const char *source) {
    char op[10];
    char arg[10];

    if (strcmp(op, "push") == 0 ) {
            
    }

  
    sscanf (source, "%s%s", op, arg);
    printf("operação: %s\n", op);
    printf("argumento: %s\n",  arg);

  
}