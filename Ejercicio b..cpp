#include <stdio.h>
#include <stdlib.h>

struct Estudiante{
	char nombre[30];
	int edad, grado;
	float notas[4];
	float promedio;
};

Estudiante estu[3];
int cantEstu = 0;

void menu();
void crearEstudiante();
void mostrarEstudiantes();
void mejorEstudiante();

int main(){
	menu();
	return 0;
}

void menu(){
	int opcion;
	
	do{
		printf("MENU\n");
		printf("1. Crear Estudiante\n");
		printf("2. Mostrar Estudiantes\n");
		printf("3. Mejor Estudiante\n");
		printf("0. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: crearEstudiante();
				break;
			case 2: mostrarEstudiantes();
				break;
			case 3: mejorEstudiante();
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalidad\n");
		}

	}while(opcion != 0);
}

void crearEstudiante(){
	int i, sumatoria = 0;
	printf("Ingrese nombre: ");
	fgets(estu[cantEstu].nombre, 30, stdin);
	printf("\nIngrese edad: ");
	scanf("%d", &estu[cantEstu].edad);
	printf("\nIngrese grado: ");
	scanf("%d", &estu[cantEstu].grado);
	for(i = 0; i < 4; i++){
		printf("\nIngrese nota %d: ", i + 1);
		scanf("%f", &estu[cantEstu].notas[i]);
		sumatoria += estu[cantEstu].notas[i];
	}
	estu[cantEstu].promedio = sumatoria / 4;
	printf("Estudiante registrado con exito\n");
	cantEstu += 1;
}
void mostrarEstudiantes(){
	int i, j;
	for(i = 0; i < cantEstu; i++){
		printf("Estudiante No. %d\n", i + 1);
		printf("Nombre: %s\n", estu[i].nombre);
		printf("Edad: %d\n", estu[i].edad);
		printf("Grado: %d\n", estu[i].grado);
		for(j = 0; j < 4; j++){
			printf("Nota %d = %.f\n", i + 1, estu[i].notas[j]);
		}
		printf("Promedio: %.f\n", estu[i].promedio);
	}	
}
void mejorEstudiante(){
	int mayor = 0, i, indice, j;
	for(i = 0; i < cantEstu; i++){
		if(estu[i].promedio > mayor){
			mayor = estu[i].promedio;
			indice = i;
		}
	}

	printf("Estudiante No. %d\n", indice + 1);
	printf("Nombre: %s\n", estu[indice].nombre);
	printf("Edad: %d\n", estu[indice].edad);
	printf("Grado: %d\n", estu[indice].grado);
	for(j = 0; j < 4; j++){
		printf("Nota %d = %.f\n", i + 1, estu[indice].notas[j]);
	}
	printf("Promedio: %.f\n", estu[indice].promedio);
}
