#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef void *(*fn_constructor)(void *);
typedef void (*fn_destructor)(void *);

/*
Se refere ao elemento da lista, com um atributo data para guardar os dados e um next para apontar para o no que o sucede
*/
typedef struct listNode
{
	void *data;
	struct listNode *next;
} listNode;

/*
Se refere a uma estrutura dalista, com ponteiro para o primeiro e último elemento da lista (head e tail),funções para alocação
e liberação deespaço na memória dos nós da lista (constructor e destructor).e tamanho da lista
*/
typedef struct list_t
{
	listNode *head;
	listNode *tail;
	fn_constructor constructor;
	fn_destructor destructor;
	size_t size;
} list_t;

/*
Se refere a um poteiro para iterar sobre os nós da lista "embelezamento-sintático"
*/
typedef listNode *listIterator;

/*
Tem como funcionalidade inicializar a lista.
*/
void listInitialize(list_t **list, fn_constructor constructor, fn_destructor destructor);

/*
Tem como funcionalidade criar um novo elemento para a lista e atribui  como seu sucessor NULL
 */
listNode *newListNode(void *data, fn_constructor constructor);

/*
Tem como funcionalidade liberar o espaço na memória usado para alocar o element inserido na lista (usando destructor) e depois libera o espaço ocupado por node
*/
void deleteNode(listNode *node, fn_destructor destructor);

/*
Tem como funcionalidade remover o head da lista 3nquanto size for diferente de 0 (enquanto ela não estiver vazia)
*/
void listDelete(list_t **list);

/*
Tem como funcionalidade retornar o primeiro elemento da lista list->head
*/
void *listAccessHead(list_t *list);

/*
Tem como funcionalidade retornar o último elemento da lista list->tail
*/
void *listAccessTail(list_t *list);

/*
Tem como funcionalidade retornar um elemento da lista com posição = pos 
*/
void *listAccess(list_t *list, size_t pos);

/*
Tem como funcionalidade remover o primeiro elemento da lista list->head
*/
void listRemoveHead(list_t *list);

/*
Tem como funcionalidade remover o último elemento da lista list->tail
*/
void listRemoveTail(list_t *list);

/*
Tem como funcionalidade remover um elemento da lista com posição = pos 
*/
void listRemove(list_t *list, size_t pos);

/*
Tem como funcionalidade inserir um elemento no inicio da lista
*/
void listPrepend(list_t *list, void *data);

/*
Tem como funcionalidade inserir um elemento no fim da lista
*/
void listAppend(list_t *list, void *data);

/*
Tem como funcionalidade inserir um elemento em uma posição = pos da lista
*/
void listInsert(list_t *list, void *data, size_t pos);

/*
Tem como funcionalidade verificar o tamanho da lista
*/
size_t listSize(list_t *list);

/*
Tem como funcionalidade verificar se a lista está vazia
*/
size_t listEmpty(list_t *list);

#endif