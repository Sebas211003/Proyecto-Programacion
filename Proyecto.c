#include<stdio.h>
#include <stdlib.h>

int tidyparking();

main (){

	//Declaro la variable ParkingM1, se encargara de mostrar la disponibilidad de los lugares de parking
	int parkingM1[16][19];
	
	//Esta funcion ordenara la forma inicial del array, esta pensada para ejectutarse solo la primera vez
	tidyparking(parkingM1); 

	//Inicio el programa
	int flag = 0;
	while(flag == 0){
		printf(",------.   ,---.  ,------. ,--. ,--.,--.,--.  ,--. ,----.    "); 
		printf("|  .--. ' /  O  | |  .--. '|  .'   /|  ||  ,'.|  |'  .-./    ");
		printf("|  '--' ||  .-.  ||  '--'.'|  .   ' |  ||  |' '  ||  | .---. ");
		printf("|  | --' |  | |  ||  ||  | |  ||   ||  ||  | `   |'  '--'  | ");
		printf("`--'     `--' `--'`--' '--'`--' '--'`--'`--'  `--' `------'  ");

		printf("Bienvenido!");



		

	}

	/*
	int n,m;
	
	int i=0,j=0;	
	int m1 [19][15];	
		
		

		for(i=0;i<8;i++){
			for(j=0;j<=4;j++){
				m1 [i][j]= rand()%2;
			}
		}
		
		for(i=0;i<8;i++){
		printf("\n");
			for(j=0;j<=4;j++){
				printf("%d",m1[i][j]);
				
			}
		}	
		
		for(i=0;i<8;i++){
		printf("\n");
			for(j=5;j<7;j++){
			for(j=5;j<7;j++){
					m1 [i][j]= 9;		
            }
       }
			
		for(i=0;i<8;i++){	
		printf("\n");
			for(j=5;j<7;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=0;i<8;i++){
		printf("\n");
			for(j=7;j<=10;j++){
					m1 [i][j]= rand()%2;		
            }
       }
		for(i=0;i<8;i++){	
		printf("\n");
			for(j=7;j<=10;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=0;i<8;i++){
		printf("\n");
			for(j=11;j<=12;j++){
					m1 [i][j]= 9;		
            }
       }
		for(i=0;i<8;i++){	
		printf("\n");
			for(j=11;j<=12;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=0;i<8;i++){
		printf("\n");
			for(j=13;j<=15;j++){
					m1 [i][j]= rand()%2;		
            }
       }
		for(i=0;i<8;i++){	
		printf("\n");
			for(j=13;j<=15;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=8;i<=10;i++){
		printf("\n");
			for(j=0;j<=15;j++){
					m1 [i][j]= 9;		
            }
       }
		for(i=8;i<=10;i++){	
		printf("\n");
			for(j=0;j<=15;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=11;i<=18;i++){
		printf("\n");
			for(j=0;j<=4;j++){
					m1 [i][j]= rand()%2;		
            }
       }
		for(i=11;i<=18;i++){	
		printf("\n");
			for(j=0;j<=4;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=11;i<=18;i++){
		printf("\n");
			for(j=5;j<=6;j++){
					m1 [i][j]= 9;		
            }
       }
		for(i=11;i<=18;i++){	
		printf("\n");
			for(j=5;j<=6;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=11;i<=18;i++){
		printf("\n");
			for(j=7;j<=15;j++){
					m1 [i][j]= rand()%2;		
            }
       }
		for(i=11;i<=18;i++){	
		printf("\n");
			for(j=7;j<=15;j++){
				printf("%d",m1[i][j]);
			}
		}
		for(i=0;i<=18;i++){	
		printf("\n");
		printf("\t");
			for(j=0;j<=15;j++){
				printf("\t");
				printf("%d",m1[i][j]);		
	}
}
}
*/
} 

int tidyparking(int tidyarray[16][19]){
	for( int i = 0; i < 16; i++ ) {
            for( int j = 0; j < 19; j++ ) {
                if( i==0 || i==16-1 || j==0 || j==19-1 )
                    tidyarray[i][j] = '';
                else
                    tidyarray[i][j] = 0;
            }       
        }
	return tidyarray; 
}