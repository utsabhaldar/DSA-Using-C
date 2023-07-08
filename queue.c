#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q){
    if(q->r == q->size -1){
        printf("Queue is Full!!!\n");
    }
    else{
        return 0;
    }
}

int isEmpty(struct queue *q){
    if(q->r = q->f = -1){
        printf("Queue is Empty!!!\n");
    }
    else{
        return 0;
    }
}

void enQueue(struct queue *q, int val){
    if(q->r<q->size)
    {
        q->r++;
        q->arr[q->f] = val;
    }
    else{
        printf("SORRY!!!NO more space to enQueue.\n");
    }
}

int deQueue(struct queue *q){
    int a=-1;
    if(q->f<q->size){
        q->f++;
        a = q->arr[q->r];
        return a;
    }
    else{
        printf("SORRY!!!Empty.\n");
    }
}

int main(){
    struct queue *q;
    q->size = 4;
    q->f = -1;
    q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    printf("CONGRATS!!! Queue is created.\n");

    enQueue(q, 10);
    printf("%d enqueued\n", q->arr[q->f]);
    enQueue(q, 11);
    printf("%d enqueued\n", q->arr[q->f]);
    enQueue(q, 12);
    printf("%d enqueued\n", q->arr[q->f]);
    enQueue(q, 13);
    printf("%d enqueued\n", q->arr[q->f]);
    // enQueue(q, 14);
    // printf("%d enqueued\n", q->arr[q->f]);
    // enQueue(q, 15);
    // printf("%d enqueued\n", q->arr[q->f]);
    // enQueue(q, 16);
    // printf("%d enqueued\n", q->arr[q->f]);

    enQueue(q, 17);

    printf("%d \n", q->arr[0]);
    printf("%d \n", q->arr[1]);
    printf("%d \n", q->arr[2]);
    printf("%d \n", q->arr[3]);

    printf("%d dequeued\n", q->arr[q->r]);
    deQueue (q);
    printf("%d dequeued\n", q->arr[q->r]);
    deQueue (q);
    printf("%d dequeued\n", q->arr[q->r]);
    deQueue (q);
    printf("%d dequeued\n", q->arr[q->r]);
    deQueue (q);
    // printf("%d dequeued\n", q->arr[q->r]);
    // deQueue (q, q->r);
    // printf("%d dequeued\n", q->arr[q->r]);
    // deQueue (q, q->r);
    // // printf("%d dequeued\n", q->arr[q->r]);
    // deQueue (q, q->r);

    deQueue (q);

    // enQueue(q, 17);
    printf("%d enqueued\n", q->arr[q->f]);

    return 0;
}

