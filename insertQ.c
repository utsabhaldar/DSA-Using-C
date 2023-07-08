#include<stdio.h>
#define MAX 3

int queue[MAX], front = -1, rear = -1;

void insert(int value) {
    if(rear == MAX-1)
        printf("Queue Overflow\n");
    else {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("Inserted %d\n", value);
    }
}

int main() {
    int choice, value;
    
        printf("1. Insert\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter the value to be inserted: ");
                    scanf("%d", &value);
                    insert(value);
                    break;
            case 2: exit(0);
            default: printf("Invalid Choice\n");
        }
    
    return 0;
}
