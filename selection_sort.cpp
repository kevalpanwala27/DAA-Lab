#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j]<array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            
        }
        
    }
    t = clock() - t;
    double timet = ((double)t)/CLOCKS_PER_SEC;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Average time is %f\n", timet);

    t1 = clock();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j]<array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            
        }
        
    }
    t1 = clock() - t1;
    double timet_1 = ((double)t1)/CLOCKS_PER_SEC;
    printf("Best time is %f\n", timet_1);

    t2 = clock();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j]<array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            
        }
        
    }
    t2 = clock() - t2;
    double timet_2 = ((double)t2)/CLOCKS_PER_SEC;
    printf("Worst time is %f\n", timet_2);
    return 0;
}




