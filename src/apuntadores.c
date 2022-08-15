#include <stdio.h>
#include <stdlib.h>

int j, x;
int *ptr;

int main(int argc, char const argv[]){
	int j = 1;
	int x = 2;
	ptr = &x;
	printf("\n");
	printf("j Value: %d Address: %p\n", j, (void *) &j);
	printf("x Value: %d Address: %p\n", x, (void *) &x);
	printf("ptr Values: %d Address: %p\n", ptr, (void *) &ptr);
	printf("The value of the integer pointed to by ptr is: %d\n", *ptr);

	return 0;
}