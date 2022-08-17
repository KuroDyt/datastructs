#include <stdio.h>
#include <stdlib.h>

struct real{
	int num;
	int den;
};

void entry(struct real *out);
void show(struct real *out);

int main(int argv, const char argc[]){
	int offset = 0, var = 0;
	printf("Algoritmo Gauss-Jordan\n");
	printf("Recuerda que la cantidad de variables es igual a la cantidad de ecuaciones que se proporcionara\n");
	printf("ingresa la cantidad de variables: ");
	scanf("%d",&var);
	offset = var+1;
	struct real *syst = malloc(sizeof(struct real)*(var*offset));
	for(int i = 0; i < var; i++){
		for(int j = 0; j < offset; j++){
			if(j==offset-1){
				printf("Ingresa el resultado de la ecuacion %d: ",(i+1));
				entry(&syst[j+(offset*i)]);
			}
			else{
				printf("Ingrese el valor de %dx%d: ", (i+1), (j+1));
				entry(&syst[j+(offset*i)]);
			}
		}
	}
	for(int i = 0; i < var; i++){
		for(int j = 0; j < offset; j++){
			printf("| ");
			show(&syst[j+(offset*i)]);
		}
		printf("\n");
	}
}

void entry(struct real *out){
	char *ent = malloc(sizeof(char)*10), *end;
	scanf("%s", ent);
	out->num=strtol(ent, &end, 10);
	out->den=strtol(end+1, &end, 10);
	free(ent);
}

void show(struct real *out){
	if((out->den) == 1){
		printf("%d ", out->num);
	}
	else{
		printf("%d/%d ", out->num, out->den);
	}
}