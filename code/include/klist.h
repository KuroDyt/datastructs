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
	SNODE *entry;
}Shead;

typedef struct DHEADER {
	int size;
	int circ;
	DNODE *head;
	DNODE *tail;
}Dhead;

void sinit(SHEADER *list);

void sinsert(SHEADER *list, SNODE *viewport, SNODE *data);

void sremove(SHEADER *list, int offset);


void dinit(DHEADER *list);

void dins_next(DHEADER *list, DNODE *viewport, DNODE *data);

void dins_prev(DHEADER *list, DNODE *viewport, DNODE *data);