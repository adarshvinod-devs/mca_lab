#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int num){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode -> data = num;
    newNode -> next = NULL;
    if(rear == NULL){
        rear = front = newNode;
    }else{
        rear -> next = newNode;
        rear = newNode;
         
    }

}

void dequeue(){
    struct Node *toFree = front;
    if(rear == NULL){
        printf("Queue is empty\n");
        return;
    }else{
        printf("%d dequeued\n",toFree -> data);
        front = front ->next;
        free(toFree);
        if(front == NULL){
            rear = NULL;
        }
    }
}

void display(){
    struct Node *temp = front;
    while(temp!= NULL){
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }
}

int main(){
    int choice, num;
    printf("\nQueue operations\n");
    printf("-----------------\n");
    printf("1 -> Enqueue\n2 -> Dequeue\n3 -> Display\n0 -> Exit\n");

    while(1){

        printf("\nEnter choice : ");
        scanf("%d",&choice);


        switch (choice)
        {
        case 1:
            printf("\nEnter Number to enqueue : ");
            scanf("%d",&num);
            enqueue(num);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid Choice\n");
            break;
        }

    }
    return 0;
}