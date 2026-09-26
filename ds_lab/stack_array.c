#include <stdio.h>
#define MAX 10
int top = -1;
int stack[MAX];

void push(int num){
    if(top == MAX - 1){
        printf("\nStack overflow\n");
    }
    else{
        top ++;
        stack[top] = num;
    }
}

void pop(){
    if(top == -1){
        printf("\nStack Underflow\n");
    }
    else{
        printf("\n%d popped\n",stack[top]);
        top--;
    }
}

void display(){
    if(top == -1){
        printf("\nStack Empty\n");
    }
    else{
        printf("\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n",stack[i]);
        }
        printf("\n");
    }
}

void peek(){
        if(top == -1){
        printf("\nStack Empty\n");
    }
    else{
        printf("\n%d\n",stack[top]);}

}

int main(){
    int choice, num, exitFlag = 0;

    printf("\nStack Operations");
    printf("\n----------------\n");
    printf("1 -> Push\n2 -> Pop\n3 -> Peek\n4 -> Display\n0 -> Exit\n");
    
    while(!exitFlag){

        printf("\nEnter Choice:  ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("\nEnter number to push: ");
                scanf("%d",&num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                exitFlag = 1;
                break;

                
        }
    }
    
}