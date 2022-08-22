#include <stdio.h>
#include <stdlib.h>

int factorial(int i);

int main(int argc, char *argv[]){
	int i = 0;
	printf("Factorial\n");
	printf("Ingrese el numero: ");
	scanf("%i", &i);
	i = factorial(i);
	printf("Resultado: %i\n", i);
	return(0);
}

int factorial(int i){
	if(i == 1) return 1;
	else {
		i = (i * factorial(i-1));
		printf("Num: %i\n", i);
		return i;
	}
}