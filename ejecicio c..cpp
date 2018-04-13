#include <stdio.h>
#include <stdlib.h>

char const l=100;
struct trabajadores{
    char nombre[30];
	int salario;	
};
trabajadores trabajador[l];
void salarios_t();
int main(){
	salarios_t();
	
	return 0;
}

void salarios_t(){
	int a,aux=0,base;
	printf("Cuantos trabajadores ahi : ");
	scanf("%d",&a);
	for(int i=0; i<a ;i++){
		printf("digite su nombre : ");
		fflush(stdin);
		fgets(trabajador[i].nombre,30,stdin);
		printf("digite su salario : ");
		scanf("%d",&trabajador[i].salario);
		
		}
		
		system("cls");
	for(int i=0; i<a; i++){
        if(trabajador[i].salario>aux){
            aux = trabajador[i].salario;
            base=i;
        }
    }
    printf("\n Trabajador de mayor paga su nombre es : %s ",trabajador[base].nombre);
		
	printf("\n su salario es de : %d ",trabajador[base].salario);
	printf("\n");
	
		for(int i=0; i<a; i++){
        if(trabajador[i].salario<aux){
            aux = trabajador[i].salario;
            base=i;
        }
    }
    printf("\n Trabajador de menor paga su nombre es : %s ",trabajador[base].nombre);
		
	printf("\n su salario es de : %d ",trabajador[base].salario);
}

