#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node * head = NULL;


void push(int num){
    struct Node * newNode;
    newNode = malloc(sizeof(newNode));
    newNode -> data = num;
    newNode -> next = NULL;

    if (head == NULL){
        head = newNode;
    }else{
        newNode -> next = head;
        head = newNode;
        
    }
}

void pop(){
    if (head == NULL){
        printf("Stack Empty\n");
    }else{
    struct Node * temp;
    temp = head;
    head = head -> next;
    printf("%d popped\n",temp -> data);
    free(temp);
    }
}

void peek(){
    if(head == NULL){
        printf("Stack Empty\n");
    }else{
        printf("%d\n",head -> data);
    }
    
}

void display(){
    struct Node * temp = head;
    if(head == NULL){
        printf("Stack Empty\n");
    }else{
        
        while(temp != NULL){
            printf("%d\n",temp -> data);
            temp = temp -> next;
        }

    }
}

int main(){
    int choice, num;

    printf("\nStack Operations");
    printf("\n----------------\n");
    printf("1 -> Push\n2 -> Pop\n3 -> Peek\n4 -> Display\n0 -> Exit\n");

    while(1){
        printf("\nEnter your choice : ");
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
                exit(0);
                break;
            default:
                printf("Invalid Choice\n");

        }
    }

}