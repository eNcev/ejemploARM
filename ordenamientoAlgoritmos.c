#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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