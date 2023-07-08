#include<stdio.h>
#include<stdlib.h>

int printArray(int *A, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while(A[i]<pivot)
        {
            i++;
        }

        while(A[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i<j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
    
}

void Quick_sort(int A[], int low, int high){
    int partitionIndex;
    if(low<high)
    {
        partitionIndex = partition(A, low, high);
        printArray(A, 8);
        printf("\n");
        Quick_sort(A, partitionIndex +1, high);
        Quick_sort(A, low, partitionIndex-1);
    }
}

int main(){
    int n = 8;
    int A[]= {2,4,3,5,7,6,9,8};


    printArray(A, n);

    Quick_sort(A, 0, n-1);

    printArray(A, n);

    return 0;
}