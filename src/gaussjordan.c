#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int num;
	int den;
}real;

void entry(real *out);
void show(real *out);
int realempt(real *num);
void realadd(real *num1, real *num2);
void realsub(real *num1, real *num2);
void realmult(real *num1, real *num2);
void realdiv(real *num1, real *num2);
void realcpy(real *num1, real *num2);
void gaussjordan(real *matrix, int offset, int var);

int main(int argv, const char argc[]){
	int offset = 0, var = 0;
	
	printf("Algoritmo Gauss-Jordan\n");
	printf("Recuerda que la cantidad de variables es igual a la cantidad de ecuaciones que se proporcionara\n");
	printf("ingresa la cantidad de variables: ");
	scanf("%d",&var);
	
	offset = var+1;
	real *syst = malloc(sizeof(real)*(var*offset));
	
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

	gaussjordan(syst, offset, var);
}

void entry(real *out){
	int den = 0;
	char *ent = malloc(sizeof(char)*10), *end;
	scanf("%s", ent);
	out->num=strtol(ent, &end, 10);
	den=strtol(end+1, &end, 10);
	if(den == 0) out->den=1;
	else out->den=den;
	free(ent);
}

void show(real *out){
	if((out->den) == 1){
		printf("%d ", out->num);
	}
	else{
		printf("%d/%d ", out->num, out->den);
	}
}

void realadd(real *num1, real *num2){
	if(num1->den == num2->den) num1->num=num1->num + num2->num;
	else{
		num1->num=(num1->num*num2->den)+(num2->num*num1->den);
		num1->den=(num1->den*num2->den);
	}
}

void realsub(real *num1, real *num2){
	if(num1->den == num2->den) num1->num=num1->num - num2->num;
	else{
		num1->num=(num1->num*num2->den)-(num2->num*num1->den);
		num1->den=(num1->den*num2->den);
	}

}

void realmult(real *num1, real *num2){
	num1->num=num1->num*num2->num;
	num1->den=num1->den*num2->den;
}

void realdiv(real *num1, real *num2){
	num1->num=num1->num*num2->den;
	num1->den=num1->den*num2->num;
}

int realempt(real *num){
	if(num->num == 0) return 0;
	else return 1;
}

void realcpy(real *num1, real *num2){
	num1->num=num2->num;
	num1->den=num2->den;
}

void gaussjordan(real *matrix, int offset, int var){
	real plh;
	for(int i = 0; i < offset; i++){
		for(int j = 0; j < var; j++){
			if(realempt(&matrix[j+])){}
		}
		for(int j = 0; j < var; j++){

		}
	}
}