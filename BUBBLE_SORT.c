#include<stdio.h>
#include<stdlib.h>

void PrintArr(int *A, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void Bubblesort(int *A, int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        printf("Working on Pass %d\n", i+1);
        PrintArr(A, n);

        for(int j=0; j<n-1; j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int n=7;
    int A[]={2,4,3,5,7,9,1};

    printf("The Array is:\n");
    PrintArr(A, n);
    printf("\n");

    Bubblesort(A, n);

    printf("\n");
    printf("After sorting, the Array is:\n");
    PrintArr(A, n);

    return 0;

}