#include <stdlib.h>
#include <stdio.h>

struct estudiante{
	char nombre[30],sexo[15];
	int edad;	
};


struct promedio{
	float notas[3];
	estudiante datos;
}prom;


void pedir_datos();
void mostrar_datos();
float suma=0;
int main(){
	pedir_datos();
	promedio();
	mostrar_datos();
	
	return 0;
}



void pedir_datos(){
	int suma=0;
printf("Ingrese el nombre del estudiante : ");
fflush(stdin);
fgets(prom.datos.nombre,30,stdin);
printf("Ingrese el sexo del estudiante : ");
fflush(stdin);
fgets(prom.datos.sexo,15,stdin);
printf("Ingrese la edad del estudiante : ");
scanf("%d",&prom.datos.edad);

for(int i=0;i<3;i++){
printf("Ingrese la nota #%d : ",i+1);
scanf("%f",&prom.notas[i]);	
}

}

void mostrar_datos(){
	float promedio_1, suma=0;
printf("\n El nombre del estudiante : %s",prom.datos.nombre);
printf("\n El sexo del estudiante : %s",prom.datos.sexo);
printf("\n Ingrese la edad del estudiante : %d", prom.datos.edad);
for(int i=0;i<3;i++){
printf("\n La nota #%d : %.1f",i+1,prom.notas[i]);
}	
for(int i=0;i<3;i++){
	suma+=prom.notas[i];
}
promedio_1=suma/3;
printf("\n El promedio del alumno es:  %.1f",promedio_1);
}
