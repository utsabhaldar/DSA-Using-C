// #include <stdio.h>

// int main()
// {
//     int i, n;

//     printf("The number of elements in array :\n");
//     scanf("%d", &n);

//     int arr[10];

//     printf("Enter the elements of array :\n");   
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("The elements of array are :\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }











// #include<stdio.h>
// #include<stdlib.h>

// int printArray(int *A, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// int partition(int A[], int low, int high){
//     int pivot = A[low];
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while(A[i]<pivot)
//         {
//             i++;
//         }

//         while(A[j]>pivot)
//         {
//             j--;
//         }

//         if(i<j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }

//     } while (i<j);

//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;

//     return j;
    
// }

// void Quick_sort(int A[], int low, int high){
//     int partitionIndex;
//     if(low<high)
//     {
//         partitionIndex = partition(A, low, high);
//         printArray(A, 8);
//         printf("\n");
//         Quick_sort(A, partitionIndex +1, high);
//         Quick_sort(A, low, partitionIndex-1);
//     }
// }

// int main(){
//     int n = 8;
//     int A[]= {2,4,3,5,7,6,9,8};


//     printArray(A, n);

//     Quick_sort(A, 0, n-1);

//     printArray(A, n);

//     return 0;
// }












#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *CreateNode(int data)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void preorder(struct node *root)
{
    if(root!=data)
    {
        printf("%d", root->data)
    }
}