#include <stdio.h>
#include <stdlib.h>

struct Cancion{
    char artista[30];
    char titulo[30];
    int duracion;
    float tamanio;
};

void menu();
void registrarCancion(int &, Cancion [], int);
void mostrarCanciones(int, Cancion [], int);
void buscarCancion(int, Cancion [], int);
bool buscarCancionArtista(int, Cancion [], int);
bool buscarCancionTitulo(int, Cancion [], int);

int main(){
    menu();
    return 0;
}

void menu(){
    const int L = 100;
    int cantCanciones = 0;
    Cancion canciones[L];
    int opcion;
    do{
        printf("MENU\n");
        printf("1. Registrar Cancion\n");
        printf("2. Mostrar Canciones Agregadas\n");
        printf("3. Buscar Cancion\n");
        printf("0. Salir\n");
        printf("Ingrese un opcion: \n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1: registrarCancion(cantCanciones, canciones, L);
                break;
            case 2: mostrarCanciones(cantCanciones, canciones, L);
                break;
            case 3: buscarCancion(cantCanciones, canciones, L);
                break;
            case 0: exit(0);
                break;
            default: printf("Opcion Invalidad\n");
        }
    }while(opcion != 0);
}

void registrarCancion(int &cantCanciones, Cancion canciones[], int L){
    printf("Ingrese nombre artista: \n");
    fflush(stdin);
    fgets(canciones[cantCanciones].artista, 30, stdin);
    printf("Ingrese titulo cancion: \n");
    fflush(stdin);
    fgets(canciones[cantCanciones].titulo, 30, stdin);
    printf("Ingrese duracion de la cancion en segundos: \n");
    scanf("%d", &canciones[cantCanciones].duracion);
    printf("Ingrese tamanio de la cancion: \n");
    scanf("%f", &canciones[cantCanciones].tamanio);
    system("cls");
    printf("Cancion Agregada con Exito \n");
    cantCanciones += 1;
    
}  

void mostrarCanciones(int cantCanciones, Cancion canciones[], int L){
    int i;
    for(i = 0; i < cantCanciones; i++){
        printf("Cancion Numero %d: \n", i + 1);
        printf("Nombre artista: %s\n", canciones[i].artista);
        printf("Titulo cancion: %s\n", canciones[i].titulo);
        printf("Duracion de la cancion: %d\n", canciones[i].duracion);
        printf("Tamanio de la cancion: %.2f\n", canciones[i].tamanio);
    }
    printf("Total de Canciones: %d\n", i);
}

void buscarCancion(int cantCanciones, Cancion canciones[], int L){
    bool encontrado;
    int opcion;

    printf("1. Buscar por Artista\n");
    printf("2. Buscar por Titulo\n");
    printf("Ingrese un opcion: \n");
    scanf("%d", &opcion);
    if(opcion == 1){
        encontrado = buscarCancionArtista(cantCanciones, canciones, L);
    }else{
        encontrado = buscarCancionTitulo(cantCanciones, canciones, L);
    }

    if(encontrado){
        printf("\n Dato encontrado");  
    }else{
        printf("\n Dato no encontrado");
    }
}

bool buscarCancionArtista(int cantCanciones, Cancion canciones[], int L){
    int i, j = 0;
    char datoBuscar[30];
    printf("Ingrese nombre artista a buscar: \n");
    fflush(stdin);
    fgets(datoBuscar, 30, stdin);
    for(i = 0; i < cantCanciones; i++){
        while(canciones[i].artista[j] != '\n'){
            if(canciones[i].artista[j] != datoBuscar[j]){
                return false;
            }
            j += 1;
        }
    }
    return true;
}

bool buscarCancionTitulo(int cantCanciones, Cancion canciones[], int L){
    int i, j = 0;
    char datoBuscar[30];
    printf("Ingrese titulo a buscar: \n");
    fflush(stdin);
    fgets(datoBuscar, 30, stdin);
    for(i = 0; i < cantCanciones; i++){
        while(canciones[i].titulo[j] != '\n'){
            if(canciones[i].titulo[j] != datoBuscar[j]){
                return false;
            }
            j += 1;
        }
    }
    return true;
}
