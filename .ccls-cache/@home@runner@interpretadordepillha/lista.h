#ifndef lista_h
#define lista_h

typedef struct lista Lista;

Lista* nova_lista();
void lista_append(Lista* s, char* chave, int value);

int lista_get(Lista* s, char* chave);
void lista_set(Lista* s, char* chave, int value);

int lista_exist(Lista* s, char* chave);
void lista_print(Lista* s);

#endif