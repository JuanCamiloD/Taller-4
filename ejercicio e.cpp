#include <stdio.h>
#include <stdlib.h>

struct promedio{
    float nota1, nota2, nota3;
};


struct alumno{
    char nombre[30];
    char sexo[20];
    int edad;
    struct promedio porcen;
}alumnos[100];


float promedio_al[100];
int tamano;
int base1, base2;


void ingresarDatos(int tamano);
void mostrarDatos(int tamano);
float promedioMenor(int tamano);
void datosAlumnoMenor(int tamano);
float promedioMayor(int tamano);
void datosAlumnoMayor(int tamano);

int main(){

    printf("Ingrese la cantidad de alumnos a tomar datos: ");
    scanf("%d",&tamano);

    printf("\n");

    ingresarDatos(tamano);
    system("cls");

    mostrarDatos(tamano);
    system("pause");
    system("cls");

    printf("El promedio menor es: %1.1f\n", promedioMenor(tamano));
    printf("Los datos del alumno son: \n");
    datosAlumnoMenor(tamano);

    printf("El promedio mayor es: %1.1f\n", promedioMayor(tamano));
    printf("Los datos del alumno son: \n");
    datosAlumnoMayor(tamano);

    system("pause");
    return 0;
}

void ingresarDatos(int tamano){
  
    for(int i=0; i<tamano; i++){
            fflush(stdin);
        printf("Ingresando datos ALUMNO %d:\n", i+1);
        printf("Ingrese su nombre: ");
        fgets(alumnos[i].nombre, 30, stdin);
        printf("Ingrese su sexo: ");
        fgets(alumnos[i].sexo, 20 ,stdin);
        printf("Digite su edad: ");
        scanf("%d",&alumnos[i].edad);
        printf("\n");
        printf("Notas ALUMNO: \n");
        printf("Ingrese Nota No.1: "); scanf("%f",&alumnos[i].porcen.nota1);
        printf("Ingrese Nota No.2: "); scanf("%f",&alumnos[i].porcen.nota2);
        printf("Ingrese Nota No.3: "); scanf("%f",&alumnos[i].porcen.nota3);

        promedio_al[i] = (alumnos[i].porcen.nota1 + alumnos[i].porcen.nota2 + alumnos[i].porcen.nota3)/3;
        printf("\n");
    }
}

void mostrarDatos(int tamano){
    
    for(int i=0; i<tamano; i++){
            fflush(stdin);
            printf("\n");
        printf("Mostrando datos ALUMNO %d:\n", i+1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Sexo: %s\n", alumnos[i].sexo);
        printf("Edad: %d\n\n", alumnos[i].edad);
        printf("Promedio: %1.1f\n", promedio_al[i]);
        printf("\n");
}
}

float promedioMenor(int tamano){
   
    float menor=999999;
    for(int i=0; i<tamano; i++){
    if(promedio_al[i] < menor){
        menor = promedio_al[i];
        base1=i;
       }
    }
    return menor;
}

void datosAlumnoMenor(int tamano){
   
    for(int i=base1; i<=base1; i++){
            printf("\n");
        printf("Datos del alumno con menor promedio %d:\n\n", base1+1);
        printf("Nombre: %s\n", alumnos[base1].nombre);
        printf("Sexo: %s\n", alumnos[base1].sexo);
        printf("Edad: %d\n", alumnos[base1].edad);
        printf("\n");
   }
}

float promedioMayor(int tamano){
    
    float mayor=0;
    for(int i=0; i<tamano; i++){
    if(promedio_al[i] > mayor){
        mayor = promedio_al[i];
        base2=i;
       }
    }
    return mayor;
}

void datosAlumnoMayor(int tamano){
    
    for(int i=base2; i<=base2; i++){
            printf("\n");
        printf("Datos del alumno con mayor promedio %d:\n\n", base2+1);
        printf("Nombre: %s\n", alumnos[base2].nombre);
        printf("Sexo: %s\n", alumnos[base2].sexo);
        printf("Edad: %d\n", alumnos[base2].edad);
        printf("\n");
   }
}
