#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    clock_t t, t1, t2;
    srand(time(0));
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand();
    }
    t = clock();
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    t = clock() - t;
    double timet = ((double)t)/CLOCKS_PER_SEC;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Average time is %f\n", timet);

    t1 = clock();
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    t1 = clock() - t1;
    double timet_1 = ((double)t1)/CLOCKS_PER_SEC;
    printf("Best time is %f\n", timet_1);

    t2 = clock();
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    t2 = clock() - t2;
    double timet_2 = ((double)t2)/CLOCKS_PER_SEC;
    printf("Worst time is %f\n", timet_2);
    return 0;
}



// clock_t t,t1,t2;
//     srand(time(0));
//     int n;
//     printf("Enter number of elements to sort: ");
//     scanf("%d",&n); 
//     int arr[n];
//     for(int i=0;i<n;i++){
        
//         arr[i]=rand();  
//     }

//     t=clock();
//     insertion(arr, n);
//     t=clock()-t;
//     double timet=((double)t)/CLOCKS_PER_SEC;  
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     printf("Average Time is %f\n",timet);

