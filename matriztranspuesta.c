#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int m, n ;
    int i , j ;
    int matriz[i][j];

     srand(time(NULL));

    printf("MATRIZ M X N\n");
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &m);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &n);
    
     
       srand(time(NULL));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
         matriz[i][j] = rand()%10; 
    }
    }

     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");

    }

    printf("Transpuesta de la matriz:\n");
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");

    }

  


  
    
    return 0;
}

