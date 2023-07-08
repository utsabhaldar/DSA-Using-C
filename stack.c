#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if (ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow!!!\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int peek(struct stack *ptr, int i){
    int arrInd = ptr->top -i +1;
    if (arrInd < 0){
        printf("nothing to peek because stack is empty!!!");
        return -1;
    }
    else{
        return arrInd;
    }
}

void pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow!!!\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
    }
}

int main(){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int));
    printf("stack is created successfully\n");
    
    printf("before pushing : %d\n", isFull(sp));
    printf("before pushing : %d\n", isEmpty(sp));

    pop(sp);

    // printf("popped %d from the stack\n", sp->arr[sp->top+2]);

    push(sp, 21);
    push(sp, 22);
    push(sp, 23);
    push(sp, 24);
    push(sp, 25);
    push(sp, 26);
    push(sp, 27);
    push(sp, 28);
    push(sp, 29);
    push(sp, 30);
    push(sp, 31); //stack overflow!!!
     
    printf("after pushing : %d\n", isFull(sp));
    printf("after pushing : %d\n", isEmpty(sp));

    printf("popped %d from the stack\n", sp->arr[sp->top]);
    pop(sp);
    printf("popped %d from the stack\n", sp->arr[sp->top]);
    pop(sp);

    printf("after popping : %d\n", isFull(sp));
    printf("after popping : %d\n", isEmpty(sp)); 


    return 0;
}