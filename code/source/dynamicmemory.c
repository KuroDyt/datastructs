#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int *iptr;

	iptr = (int *)malloc(sizeof(int));

	if(iptr == NULL) return -1;

	*iptr = 5;

	printf("%d , %p\n",*iptr, iptr);

	free(iptr);

	return 0;
}