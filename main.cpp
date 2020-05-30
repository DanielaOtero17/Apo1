#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int numeros[100][100],filas,columnas;
	printf("ingrese el numero de filas:  \n");
	scanf("%d",&filas);
	printf("ingrese el numero de columnas: \n");
	scanf("%d",&columnas);
	
	for(int i=0;i<filas;i++){

		for(int j=0;j<columnas;j++){

        	printf("ingrese el numero [%i%s%i%s",i,"][",j,"]4\n");
			scanf("%d",&numeros[i][j]);
		}
	}
	
	for(int i=0;i<filas;i++){

		for(int j=0;j<columnas;j++)
		{
            printf("  %d",numeros[i][j]);
		}
		printf("\n");
	}
	
	
	system("pause");
	return 0;
}
