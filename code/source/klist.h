#include <stdio.h>
#include <stdlib.h>
#include <klist.h>

void sinit(SHEADER *list, int circ){
	list->size=0;
	list->circ=circ;
	base=NULL;
	entry=NULL;
}

void dinit(DHEADER *list, int circ){
	list->size=0;
	list->circ=circ;
	list->head=NULL;
	list->tail=NULL;
}

void sinsert(SHEADER *list, SNODE *viewport, void *data){
	if(list_tail(list) == NULL){

	}
	else{
		int count = 0;
		do{
			SNODE entry = list_tail(list);
			if(entry == viewport){

			}
			else{
				count++;
				entry = list_next(entry);
			}
			
		}while(1);
	}
}

void sremove(SHEADER *list, SNODE *viewport,int offset);
void sdestroy(SHEADER *list, SNODE *viewport, int clean);

void dins_next(DHEADER *list, DNODE *viewport, void *data);
void dins_prev(DHEADER *list, DNODE *viewport, void *data);
void dremove(DHEADER *list, DNODE *viewport, int offset);
void ddestroy(DHEADER *list, DNODE *viewport, int clean);
