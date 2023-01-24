#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int partition(int array[], int low, int high, int pivot)
{
    int i = low;
    int j = low;
    while (i <= high) {
        if (array[i]>pivot) {
            i++;
        } else {
            int temp = array[i];
            array[i]=array[j];
            array[j]=temp;
            i++;
            j++;
        }
        
    }
    return j-1;
}

void QuickSort(int array[], int low, int high)
{
    if(low<high) {
        int pivot = array[high];
        int pos = partition(array, low, high, pivot);

        QuickSort(array, low, pos - 1);
        QuickSort(array, pos + 1, high);
    }
}

int main(int argc, char const *argv[])
{
    clock_t t, t1, t2;
    srand(time(0));
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        array[i] = rand();
    }
    t = clock();
    QuickSort(array, 0, n - 1);
    t = clock() - t;
    double time_t = ((double)t)/CLOCKS_PER_SEC;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Average time is %f\n", time_t);

    t1 = clock();
    QuickSort(array, 0, n - 1);
    t1 = clock() - t1;
    double timet_1 = ((double)t1)/CLOCKS_PER_SEC;
    printf("Best time is %f\n", timet_1);

    t2 = clock();
    QuickSort(array, 0, n - 1);
    t2 = clock() - t2;
    double timet_2 = ((double)t2)/CLOCKS_PER_SEC;
    printf("Worst time is %f\n", timet_2);

    return 0;
}



