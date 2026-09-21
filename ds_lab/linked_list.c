#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;

    struct Node *next;
};

int main(){
    int n;
    struct Node *newNode, *temp, *head = NULL;

    printf("Enter the number of nodes to be created :\n");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        newNode = malloc(sizeof(struct Node));
        printf("\nEnter data: \n");
        scanf("%d",&newNode -> data);
        newNode -> next = NULL;

        if(head == NULL){
            head = newNode;
            temp = head;
        }
        else{
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
        }

    }
    


}