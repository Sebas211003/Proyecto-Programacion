#include<stdio.h>
#include <stdlib.h>
main (){
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
	//Hola
	//chao

