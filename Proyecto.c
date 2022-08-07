#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int op, type;

void tidyparking();
void print();
void inandout();

//Declaro la variable ParkingM1, se encargara de mostrar la disponibilidad de los lugares de parking
char parkingM1[16][19];

int main (){

	//Esta funcion ordenara la forma inicial del array, esta pensada para ejectutarse solo la primera vez
	tidyparking(); 
        srand(time(NULL));

	//Inicio el programa
	int flag = 0;
	while(flag == 0){
		printf(",------.   ,---.  ,------. ,--. ,--.,--.,--.  ,--. ,----.    \n"); 
		printf("|  .--. ' /  O  | |  .--. '|  .'   /|  ||  ,'.|  |'  .-./    \n");
		printf("|  '--' ||  .-.  ||  '--'.'|  .   ' |  ||  |' '  ||  | .---. \n");
		printf("|  | --' |  | |  ||  ||  | |  ||   ||  ||  | `   |'  '--'  | \n");
		printf("`--'     `--' `--'`--' '--'`--' '--'`--'`--'  `--' `------'  \n");

		printf("Bienvenido!\nEnseguida encontrara un mapa de la zona.\n\n");
		print(); 
                

		scanf("%d", &flag);
	}

} 



void tidyparking(){ //Esta funcion ordena el vector inicialmente, para que muestre todos los lugares disponibles. 


	for( int i = 0; i < 16; i++ ) {
            for( int j = 0; j < 19; j++ ) {
                    if( i==0 || i==16-1 || j==0 || j==19-1 )
                    parkingM1[i][j] = '#';
                else
                    parkingM1[i][j] = ' ';
            }       
        }
	
	for( int i = 1; i < 5; i++ ) {
            for( int j = 1; j < 9; j++ ) {
                    parkingM1[i][j] = '0';
            }       
        }

	for( int i = 7; i < 10; i++ ) {
            for( int j = 1; j < 9; j++ ) {
                    parkingM1[i][j] = '0';
            }       
        }

	for( int i = 12; i < 15; i++ ) {
            for( int j = 1; j < 9; j++ ) {
                    parkingM1[i][j] = '0';
            }       
        }

	for( int i = 1; i < 5; i++ ) {
            for( int j = 11; j < 18; j++ ) {
                    parkingM1[i][j] = '0';
            }       
        }
	
	for( int i = 7; i < 15; i++ ) {
            for( int j = 11; j < 18; j++ ) {
                    parkingM1[i][j] = '0';
            }       
        }
	
}
void print(){ //Esta funcion se encarga de imprimir el mapa 
	
	for (int i=0;i<16;i++){
		for (int k=0;k<19;k++){
			printf("%c  ",parkingM1[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}
void inandout(){//Es la ecargada de gestionar la salida y entrada de los carros

        //HOLA

}