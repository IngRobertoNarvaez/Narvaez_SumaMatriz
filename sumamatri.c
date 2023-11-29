#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int filas;
    int columnas;
    printf("Ingrese Filas Primera Matriz: ");
    scanf("%d", &filas);
    printf("Ingrese Columnas Primera Matriz: ");
    scanf("%d", &columnas);
    int matriz[filas][columnas];
    srand(time(NULL));
    /*Tener matriz aleatorias*/
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
    /*Imprimir las matriz*/
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}