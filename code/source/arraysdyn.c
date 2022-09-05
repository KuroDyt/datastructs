#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[10];
	int age;
	int score;
}names;

int main(int argc, char *argv[]){
	int count = 10;
	int *numbers = (int*) malloc(count * sizeof(int));

	if(numbers == NULL){
		fprintf(stderr, "[!!]FATAL ERROR MEMORY NOT ASSIGNED\n");
		return -1;
	}

	for(int i = 0, j = 1; i < count; j++){
		if((j%2) == 0){
			numbers[i] = j;
			i++;
		}
	}

	for(int i = 0; i < count; i++){
		printf("| %d ", numbers[i]);
	}
	printf("\n");

	numbers[2] = -1;

	for(int i = 0; i < count; i++){
		printf("| %d ", numbers[i]);
	}
	printf("\n");
	free(numbers);

	printf("Arreglo matricial de calificaciones\n");
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%i", &count);
	
	if(count == 0){
		fprintf(stderr, "[!!]FATAL ERROR ARRAY SET TO 0\n");
		return -1;
	}

	names *students = (names*) malloc(count * sizeof(names));

	if(students == NULL){
		fprintf(stderr, "[!!]FATAL ERROR MEMORY NOT ASSIGNED\n");
		return -1;
	}
	
	printf("Ingrese los valores de la tabla a continuacion\n");

	for(int i = 0; i < count; i++){
		printf("Fila: %d\n", i);
		printf("Ingrese nombre: ");
		scanf("%s", &students[i].name);
		printf("Ingrese la edad: ");
		scanf("%d", &students[i].age);
		printf("Ingrese la calificacion: ");
		scanf("%d", &students[i].score);
	}

	printf("|Nombre    |Edad  |Calificacion|\n");
	
	for(int i = 0; i < count; i++){
		printf("|%*s|%*d|%*d|\n", 10,students[i].name, 6, students[i].age, 12,students[i].score);
	}

	free(students);

	return 0;
}