// Programa para registrar proveedores

#include <stdio.h>
#include <stdlib.h>

//estructuras
struct proveedor{
	char nombre[30];
	int cantidad_vendida,precio_unitario,totales;
}proveedores[50];

//Prototipo de funciones
void Menu();
void recibir_preveedores();
bool buscar_proveedor(proveedor [],int );
void mayorymenor_proveedor(int ,proveedor[]);

// Variables globales.
int a,i,j,ban,cantidad,precio,aux=0,menor=9999,base,base1;

int main(){
	
	Menu(); 
	
	return 0;
}


// Menu
void Menu(){
	int opcion;
    do{
        printf("\n MENU\n");
        printf("1. Visualizar datos de un proveedor en expesifico.\n");
        printf("2. registrar proveedores.\n");
        printf("3. Proveedor mas barato y Proveedor mas costoso\n");
        printf("0. Salir\n");
        printf("Ingrese un opcion: \n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1: buscar_proveedor(proveedores,a) ;
                break;
            case 2: recibir_preveedores();
                break;
            case 3: mayorymenor_proveedor(a,proveedores);
                break;
            case 0: exit(0);
                break;
            default: printf("Opcion Invalidad\n");
        }
        
    }while(opcion != 0);
	
}

// Ingresando proveedores
void recibir_preveedores(){
	printf("\n ingrese el numero de proveedores a registrar: \n");
	scanf("%d",&a);
	for( i=0 ; i<a ; i++ ){
	
		printf("\n ingrese el nombre del proveedor #%d:\n",i+1);
		fflush(stdin);
		fgets(proveedores[i].nombre,30,stdin);
		printf("ingrese la cantidad total de unidades a comprar:\n");
		scanf("%d",&proveedores[i].cantidad_vendida);
		printf("\n ingrese el precio unitario del producto :\n");
		scanf("%d",&proveedores[i].precio_unitario);
		cantidad=proveedores[i].cantidad_vendida;
		precio=proveedores[i].precio_unitario;
		proveedores[i].totales=cantidad*precio;
		system("cls");
	
    }
     
     printf("\n Proveedores resgistrados con ¡Exito!");
}

// buscando un proveedor 
bool buscar_proveedor(proveedor [],int  ){
    bool encontrado;
    char datoBuscar[30];
    printf("\n Ingrese nombre del proveedor a buscar: \n");
    fflush(stdin);
    fgets(datoBuscar, 30, stdin);
    for(i = 0; i < a; i++){
    
        while(proveedores[i].nombre[j] != '\n'){
            if(proveedores[i].nombre[j] != datoBuscar[j]){
                encontrado = false;
              
            }
            j += 1;
        }
        	ban=i;
    }
    encontrado = true;
    system("cls");
    if (encontrado==true){
    	
    	printf("\n Nombre del proveedor: %s",proveedores[ban].nombre);
    	printf("\n Cantidad de compra: %d",proveedores[ban].cantidad_vendida);
	    printf("\n Precio unitario: %d",proveedores[ban].precio_unitario);
	    printf("\n Precio total: %d",proveedores[ban].totales);
    
	}
    
}


void mayorymenor_proveedor(int ,proveedor[]){
	
	for(int i=0; i<a; i++){
	        if(proveedores[i].totales>aux){
	            aux = proveedores[i].totales;
	            base=i;
	        }
	    }
	    for(int i=0; i<a; i++){
	        if(proveedores[i].totales<menor){
	           menor = proveedores[i].totales;
	            base1=i;
	          }
	       }
	       system("cls");
	    printf("\n Trabajador de mayor paga su nombre es : %s ",proveedores[base].nombre);
			
		printf("\n su salario es de : %d ",proveedores[base].totales);
		printf("\n");
		
			
	    printf("\n Trabajador de menor paga su nombre es : %s ",proveedores[base1].nombre);
		printf("\n su salario es de : %d ",proveedores[base1].totales);
		
		printf("\n\n");
}
