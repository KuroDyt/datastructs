#include <stdio.h>
#include <stdlib.h>

void factorial(int *i, int *j);

int main(int argc, char *argv[]){
	int i = 0, j = 0;
	printf("Factorial\n");
	printf("Ingrese el numero: ");
	scanf("%i", &i);
	j = i;
	factorial(&i, &j);
	printf("Resultado: %i\n", i);
	return(0);
}

void factorial(int *i, int *j){
	if(*j == 1) printf("End\n");
	else {
		*j = *j - 1;
		printf("Num: %i\n", *i);
		*i = *i * *j;
		factorial(i, j);
	}
}