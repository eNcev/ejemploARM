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
    return 0;
}