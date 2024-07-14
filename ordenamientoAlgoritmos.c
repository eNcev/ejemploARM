#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void intercambiar(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenamiento_burbuja(int arr[], int n)
{
    for(int i = 0; i < n-1;  i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            printf("Comparando %d con %d \n", arr[j], arr[j + 1]);
            if(arr[j] > arr[j + 1])
            {
                intercambiar(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int numeros_burbuja[100];
    printf("Arreglo inicial para burbuja \n");
    for(int i = 0; i< 100; i++)
    {
        numeros_burbuja[i] = rand() % 100;
        printf("%d ",numeros_burbuja[i]);
    }


    printf("Ordenamiento burbuja : \n");
    ordenamiento_burbuja(numeros_burbuja,100);

    printf("Arreglo ordenado con algoritmo burbuja : \n");
    for(int i = 0; i< 100; i++)
    {
        printf("%d ",numeros_burbuja[i]);
    }


    return 0;


}