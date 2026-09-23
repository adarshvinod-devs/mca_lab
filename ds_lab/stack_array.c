#include <stdio.h>
#define MAX 10

void push(int stack[],int *top, int num){
    if(*top == MAX - 1){
        printf("Stack overflow\n");
    }
    else{
        *top ++;
        stack[*top] == num;
    }
}

void pop(int stack[], int *top){
    if(*top == -1){
        printf("\nStack Underflow\n");
    }
    else{
        printf("%d popped\n",stack[*top]);
        *top--;
    }
}

void display(int stack[], int *top){
    if(*top == -1){
        printf("Stack Empty");
    }
    else{
        for(int i = *top; i >= 0; i--){
            printf("%d",stack[*top]);
        }
    }
}

void peek(int stack[], int *top){
    printf("%d",stack[*top]);

}

int main(){
    int stack[MAX];
    int choice, num, exitFlag = 0, top = -1;

    printf("\nStack Operations\n");
    printf("\n----------------\n");
    printf("1 -> Push\n2 -> Pop\n3 -> Peek\n4 -> Display\n0 -> Exit\n");
    
    while(!exitFlag){

        printf("Enter Choice:  \n");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("Enter number to push\n");
                scanf("%d",&num);
                push(stack,&top,num);
                break;
            case 2:
                pop(stack,&top);
                break;
            case 3:
                peek(stack, &top);
                break;
            case 4:
                display(stack,&top);
            case 0:
                exitFlag = 1;
                break;

                
        }
    }
    
}