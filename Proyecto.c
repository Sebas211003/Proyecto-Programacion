#include<stdio.h>
#include <stdlib.h>
main (){
	int n,m;
	
	int i=0,j=0;
	int m1 [18][15];	
		
		
		for(i=0;i<7;i++){
			for(j=0;j<=4;j++){
				m1 [i][j]= rand()%2;
			}
		}
		for(i=0;i<7;i++){
		printf("\n");
			for(j=0;j<=4;j++){
				printf("%d",m1[i][j]);
				
			}
		}	
		for(i=0;i<7;i++){
		printf("\n");
			for(j=4;j<7;j++){
					m1 [i][j]= 9;		
            }
       }
		for(i=0;i<7;i++){	
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
	}

