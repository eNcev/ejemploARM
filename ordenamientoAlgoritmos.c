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

void ordenamiento_insercion(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int valor_actual = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > valor_actual)
        {
            printf("Comparando %d con %d \n", arr[j], valor_actual);
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = valor_actual;
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

    int numeros_insercion[100];
    printf("Arreglo inicial para insercion \n");
    for(int i = 0; i< 100; i++)
    {
        numeros_insercion[i] = rand() % 100;
        printf("%d ",numeros_insercion[i]);
    }


    printf("Ordenamiento burbuja : \n");
    ordenamiento_burbuja(numeros_burbuja,100);

    printf("Ordenamiento insercion : \n");
    ordenamiento_insercion(numeros_insercion,100);

    printf("Arreglo ordenado con algoritmo burbuja : \n");
    for(int i = 0; i< 100; i++)
    {
        printf("%d ",numeros_burbuja[i]);
    }

    printf("Arreglo ordenado con algoritmo insercion : \n");
    for(int i = 0; i< 100; i++)
    {
        printf("%d ",numeros_insercion[i]);
    }

    return 0;
}