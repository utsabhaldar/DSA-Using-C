#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*p;

void insert_beg(int ele);
void display();

void main()
{
    int val,n;
    p=NULL;
    printf("Enter the value : \n");
    scanf("%d", &val);
    insert_beg(val);
    printf("%d is enserted at beginning", val);
    display(n);

}

// void insert_beg(int ele)
// {
//     struct node *tmp, *tmp1;
//     tmp = p;
//     tmp1 = (struct node *) malloc(sizeof(struct node));
//     tmp -> data = ele;
//     if(p==NULL){
//         tmp1 = p;
//     }
//     else{
//         tmp1 -> next = p;
//     }
//     p = tmp1;
// };


 void insert_beg(int ele){
            struct node *tmp , *tmp1;
            tmp=p;
            tmp1=(struct node*)malloc(sizeof(struct node));
            tmp1->data=ele;
            tmp1->next=p;
            p=tmp1;
        };


void display(){
    struct node *tmp1;
    while(tmp1 != NULL)
    {
        printf("\n %d ", tmp1->data);
        tmp1 = tmp1->next;
    }

}