#include <stdio.h>


int main()

{

    int x, y, z;


    printf("Ingrese las dimensiones del arreglo tridimensional:\n");

    printf("x: ");

    scanf("%d", &x);

    printf("y: ");

    scanf("%d", &y);

    printf("z: ");

    scanf("%d", &z);


    int arreglo[x][y][z];


    // Inicializar todas las matrices en cero

    for (int i = 0; i < x; i++)

    {

        for (int j = 0; j < y; j++)

        {

            for (int k = 0; k < z; k++)

            {

                arreglo[i][j][k] = 0;

            }

        }

    }


    // Inicializar la última matriz en uno

    for (int j = 0; j < y; j++)

    {

        for (int k = 0; k < z; k++)

        {

            arreglo[x - 1][j][k] = 1;

        }

    }


    // Imprimir los elementos del arreglo

    printf("Elementos del arreglo tridimensional:\n");

    for (int i = 0; i < x; i++)

    {

        for (int j = 0; j < y; j++)

        {

            for (int k = 0; k < z; k++)

            {

                printf("%d ", arreglo[i][j][k]);

            }

            printf("\n");

        }

        printf("\n");

    }


    return 0;

}
