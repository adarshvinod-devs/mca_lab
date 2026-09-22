#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;

    struct Node *next;
};

void display(struct Node* head){
    struct Node* temp;
    temp = head;
    printf("\nData\n");
    printf("----\n");
    while(temp!=NULL ){
        printf("%d\n",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void insertAtBeginning(struct Node** head, int num){
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode -> data = num;
    newNode -> next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node ** head, int num){
    struct Node * temp = *head, *newNode;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    newNode = malloc(sizeof(struct Node));
    newNode -> data = num;
    newNode -> next = NULL;
    temp -> next = newNode;

}

int main(){
    int n, num;
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
    
    display(head);

    printf("Enter element to insert at begining: ");
    scanf("%d", &num);

    insertAtBeginning(&head,num);

    display(head);

    printf("\nEnter element to insert at end :\n");
    scanf("%d",&num);

    insertAtEnd(&head,num);

    display(head);

    
    return 0;
}