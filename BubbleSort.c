#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int *A, int n){
    int temp;
    for(int i=0;i<n-1;i++){
        printf("Working on the pass %d \n", i+1);
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int n=8;
    int A[]={2,4,3,5,7,9,1,6};
    for(int i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    bubbleSort(A, n);

    for(int i=0;i<n;i++){
        printf("After Sorting the elements of the array is %d \n", A[i]);
    }

    return 0;
}