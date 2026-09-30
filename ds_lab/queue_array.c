#include <stdio.h>
#define SIZE 50

int front = -1;
int rear = -1;
int queue[SIZE];

void enqueue(int num){
    if(rear == SIZE - 1){
        printf("Queue Limit Reached\n");
        return;
    }
    rear ++;
    queue[rear] = num;
    if(front == -1){
        front ++;
    }
}

void dequeue(){
    if(front > rear || rear == -1){
        printf("Queue Empty\n");
    }else{
        printf("%d dequeued\n", queue[front]);
        front ++;
    }
}

void display(){

    if(front > rear || rear == -1){
        printf("Queue Empty\n");
    }else{
        for(int i = front; i <= rear; i++){
            printf("%d\n",queue[i]);
        }
    }
}

int main(){
    int choice, num, exitFlag = 0;
    printf("\nQueue operations\n");
    printf("-----------------\n");
    printf("1 -> Enqueue\n2 -> Dequeue\n3 -> Display\n0 -> Exit\n");

    while(!exitFlag){

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
            exitFlag = 1;
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }

    }
    return 0;
}