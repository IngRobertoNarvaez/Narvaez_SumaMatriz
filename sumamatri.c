#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int filas;
    int columnas;
    int filas2;
    int columnas2;
    int filas3;
    int columnas3;
    printf("Ingrese Filas Primera Matriz: ");
    scanf("%d", &filas);
    printf("Ingrese Columnas Primera Matriz: ");
    scanf("%d", &columnas);
    printf("Ingrese Filas Primera Matriz: ");
    scanf("%d", &filas2);
    printf("Ingrese Columnas Primera Matriz: ");
    scanf("%d", &columnas2);
    int matriz[filas][columnas];
    int matrizdos[filas2][columnas2];
    int matrizsuma[filas3][columnas3];
    srand(time(NULL));
    printf("\nPrimera matriz ");
    printf("\n");
    /*Tener matriz aleatorias*/
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
            matriz[i][j] = matriz[i][j];
        }
    }
    /*Imprimir la matriz*/
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    /*Tener matrizdos aleatorias*/
    printf("\nSegunda matriz");
    printf("\n");
    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            matrizdos[i][j] = rand() % 100 + 1;
            matrizdos[i][j] = matrizdos[i][j];
        }
    }
    /*Imprimir la matriz dos*/

    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            printf("%d ", matrizdos[i][j]);
        }
        printf("\n");
    }

    if (filas == filas2 && columnas == columnas2)
    {
        for (int i = 0; i < filas3; i++)
        {
            for (int j = 0; j < columnas3; j++)
            {
                matrizsuma[i][j] = matriz[i][j] + matrizdos[i][j];
                printf("%d", matrizsuma[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}