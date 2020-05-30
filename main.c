#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(int argc, char *argv[]) 
{
	int totalEst = 2;
	int coordenadas_x[totalEst],coordenadas_y[totalEst];

		for(int i=0;i<totalEst;i++){
        	printf("posicion X estudiante  %i%s",i,": ");
			scanf("%d",&coordenadas_x[i]);
            printf("posicion Y estudiante  %i%s",i,": ");
			scanf("%d",&coordenadas_y[i]);
			printf("\n");
		}
		
	double matriz_distancia[totalEst][totalEst];

	for(int i=0;i<totalEst;i++){
		for(int j=0; j<totalEst;j++){

            int restaX = coordenadas_x[i]-coordenadas_x[j];
            int restaY = coordenadas_y[i]-coordenadas_y[j];
            
            printf("  en x: %d",restaX);
            printf("  en y: %d",restaY);
            
			matriz_distancia[i][j] = sqrt(pow(restaX,2)+pow(restaY,2));
		}
	}
 	printf("La matriz de distancias es: \n");
 	for(int i=0;i<totalEst;i++){
		for(int j=0; j<totalEst;j++){
		//printf("  %d",matriz_distancia[i][j]);
		printf("la raiz de 9 es %d",sqrt(9));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


