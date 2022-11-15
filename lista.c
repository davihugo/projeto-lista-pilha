#include "lista.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"


struct node {
  char chave[50];
  int value;
struct node* prox;
};

struct lista {
  struct node* prim;
};

static struct node* lista_find(Lista* l, char* chave) {
  struct node* prox = l-> prim;
  while(prox) {
    if(strcmp(prox->chave, chave) == 0)
    return prox;
    prox = prox -> prox;
  }
  return NULL;
}

Lista* nova_lista() {
  
  Lista*  l = calloc (1, sizeof(Lista));
    l -> prim = NULL;
  return l; 
}
void lista_append(Lista* l, char* chave, int value) {
  
  struct node* node = calloc (1, sizeof(struct node));
  strcpy(node->chave,chave);
    node->value = value;
    node-> prox = l->prim; 
  l->prim = node;
}
int lista_get(Lista* l, char* chave) {
  struct node* n;
if ((n = lista_find(l, chave)) != NULL) {
  return n-> value;
}
  return -1; 
}
void lista_set(Lista* l, char* chave, int value) {
  struct node* n;
if ((n = lista_find(l, chave)) != NULL) {
	n->value = value;
}

}
int lista_exist(Lista* l, char* chave) {
  return lista_find(l, chave) != NULL;
}
void lista_print(Lista* l) {
  struct node* prox = l->prim;

  while(prox) {
	printf("%s -> %d\n", prox -> chave, prox -> value);
    prox = prox -> prox;
}
  
}