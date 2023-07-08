#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void Traversal(struct node* ptr){
    while(ptr != NULL){
    printf("Element %d \n", * ptr -> next);
    ptr = ptr -> next;
    }
};

int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    head -> data = 5;
    head -> next = second;

    second -> data = 10;
    second ->next = third;

    third ->data = 15;
    third ->next = fourth;

    fourth ->data = 20;
    fourth ->next = fifth;

    fifth ->data = 25;
    fifth ->next = NULL;

    Traversal(head);

    return 0;

}