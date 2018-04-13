#include <stdio.h>
#include <stdlib.h>

char const l=100;
struct persona{
	char nombre[30];
	int ban;
}personas[l];


struct persona_sin{
	char nombre[30];
}personasin[l];


struct persona_con{
	char nombre[30];
}personacon[l];

void pedir_datos();



int a,i,j=0,n=0,contador1=0,contador2=0;


int main(){
pedir_datos();
return 0;
}
void pedir_datos(){
	
	printf("\n cuantos usuarios va ingresar : ");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		
		printf("\n ingrese el nombre del usuario : ");
		fflush(stdin);
		fgets(personas[i].nombre,30,stdin);
		
	    printf("si el usuario tiene alguna dicapacidad ingrese: 1 ; si el usuario no tiene ingrese: 0 ");
	    scanf("%d",&personas[i].ban);
	    
    	if(personas[i].ban==0){
		
			for(int z = 0; z < l ; z++){
				
				personasin[j].nombre[z] = personas[i].nombre[z];	
			}
			j++;
		}else{
			
			for(int z = 0; z < l ; z++){
				personacon[n].nombre[z] = personas[i].nombre[z];	
			}
			n++;
		}
	}

	for(i=0;i<j;i++){
 		printf("\n Personas sin discapasidad: %s",personasin[i].nombre);
	}

	printf("\n\n");
	
	for(i=0;i<n;i++){
	 printf("\n persona con discapacidad: %s",personacon[i].nombre);
	}
	
}






