#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int data;
    struct Queue *next;
};

struct Queue *front = NULL, *rear = NULL;

void enqueue(int value) {
    struct Queue *newNode = (struct Queue *)malloc(sizeof(struct Queue));
    newNode->data = value;
    newNode->next = NULL;

    if(front == NULL && rear == NULL) {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

int main() {
    int choice, value;
    while(1) {
        printf("1. Insert\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter the value to be inserted: ");
                    scanf("%d", &value);
                    enqueue(value);
                    break;
            case 2: exit(0);
            default: printf("Invalid Choice\n");
        }
    }
    return 0;
}
 