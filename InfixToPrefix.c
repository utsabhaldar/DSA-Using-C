
// // Q:-C program to convert infix to postfix using stack.

// #include<stdio.h> 
// #include<string.h> 
// #include<ctype.h> 
// #include<stdlib.h>

// #define MAX 100

// char stack[MAX];
// int top = -1;

// void push(char x)
// {
//     stack[++top] = x;
// }

// char pop()
// {
//     if(top == -1)
//         return -1;
//     else
//         return stack[top--];
// }

// int priority(char x)
// {
//     if(x == '(')
//         return 0;
//     if(x == '+' || x == '-')
//         return 1;
//     if(x == '*' || x == '/')
//         return 2;
// }

// int main()
// {
//     char exp[MAX];
//     char *e, x;
//     printf("Enter the expression :: ");
//     scanf("%s",exp);
//     e = exp;
//     while(*e != '\0')
//     {
//         if(isalnum(*e))
//             printf("%c",*e);
//         else if(*e == '(')
//             push(*e);
//         else if(*e == ')')
//         {
//             while((x = pop()) != '(')
//                 printf("%c", x);
//         }
//         else
//         {
//             while(priority(stack[top]) >= priority(*e))
//                 printf("%c",pop());
//             push(*e);
//         }
//         e++;
//     }
//     while(top != -1)
//     {
//         printf("%c",pop());
//     }
//     printf("\n");
//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char item) {
    if (top >= MAX_SIZE-1) {
        printf("Stack Overflow!");
    } else {
        stack[++top] = item;
    }
}

char pop() {
    if (top < 0) {
        printf("Stack Underflow!");
        return -1;
    } else {
        return stack[top--];
    }
}

int precedence(char symbol) {
    if(symbol == '^') {
        return 3;
    } else if(symbol == '*' || symbol == '/') {
        return 2;
    } else if(symbol == '+' || symbol == '-') {
        return 1;
    } else {
        return 0;
    }
}

void infixToPrefix(char infix[], char prefix[]) {
    int i, j = 0;
    int len = strlen(infix);
    char item;
    push('(');
    strcat(infix, ")");

    for (i = 0; i < len; i++) {
        item = infix[i];
        if (item == '(') {
            push(item);
        } else if (item >= 'A' && item <= 'Z' || item >= 'a' && item <= 'z') {
            prefix[j] = item;
            j++;
        } else if (item == ')') {
            while (stack[top] != '(') {
                prefix[j] = pop();
                j++;
            }
            pop();
        } else {
            while (precedence(stack[top]) >= precedence(item)) {
                prefix[j] = pop();
                j++;
            }
            push(item);
        }
    }
    prefix[j] = '\0';
    strrev(prefix);
}

int main() {
    char infix[MAX_SIZE], prefix[MAX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
