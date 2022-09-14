#ifndef KLIST_H
#define KLIST_H
#include <stdlib.h>

typedef struct SNODE{
	void *data;
	struct SNODE *next;
}Snode;

typedef struct DNODE{
	void *data;
	struct DNODE *prev;
	struct DNODE *next;
}Dnode;

typedef struct SHEADER {
	int size;
	int circ;
	SNODE *tail;
}Shead;

typedef struct DHEADER {
	int size;
	int circ;
	DNODE *head;
	DNODE *tail;
}Dhead;

void sinit(SHEADER *list, int circ);
void sinsert(SHEADER *list, SNODE *viewport, void *data);
void sremove(SHEADER *list, SNODE *viewport,int offset);
void sdestroy(SHEADER *list, SNODE *viewport, int clean);
void sclean(SHEADER *list, SNODE *viewport);

void dinit(DHEADER *list, int circ);
void dins_next(DHEADER *list, DNODE *viewport, void *data);
void dins_prev(DHEADER *list, DNODE *viewport, void *data);
void dremove(DHEADER *list, DNODE *viewport, int offset);
void ddestroy(DHEADER *list, DNODE *viewport, int clean);
void dclean(DHEADER *list, DNODE *viewport);

#define list_size(list) ((list)->size)
#define list_data(node) ((node)->data)
#define list_circ(list) ((list)->circ)

#define list_head(list) ((list)->head)
#define list_tail(list) ((list)->tail)
#define list_is_head(node) ((node)->prev == NULL ? 1:0)
#define list_is_tail(node) ((node)->next == NULL ? 1:0)
#define list_next(node) ((node)->next)
#define list_prev(node) ((node)->prev)

#endif