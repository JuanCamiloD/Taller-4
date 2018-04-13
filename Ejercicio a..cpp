#include <stdlib.h>
#include <stdio.h>

struct competidor {
	char nombre[30], club[30],sexo[15];
	int edad;
	
} players;

void ingresar();
void categoria();



int main(){
	
   ingresar();
   return 0;
}
void ingresar(){

	printf ("ingrese el nombre del jugador.\n");
    fflush (stdin);
    fgets(players.nombre,30,stdin);
    printf ("Ingrese su edad.\n");
    scanf("%d",&players.edad);
    printf ("Ingrese su sexo.\n");
    fflush (stdin);
    fgets(players.sexo,15,stdin);
    printf ("Ingrese su club.\n");
    fflush (stdin);
    fgets(players.club,30,stdin);
  

	printf ("el nombre del jugador es : %s ",players.nombre);
	printf ("\n la edad del jugador es : %d ",players.edad);
	printf ("\n el club del jugador es : %s ",players.club);
	printf("su categoria es: "); categoria();



}

void categoria(){
	if (players.edad>30){
		printf("mayor");
	}else if (players.edad<30&&players.edad>15){
	   printf("Joven");
	}else{
	  printf("Infantil");
	}
}
