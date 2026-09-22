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

void insertAtPosition(struct Node ** head, int pos, int num){
    struct Node * temp = *head, *newNode;
    for(int i = 0; i < pos -1; i++){
        temp = temp -> next;
    }
    
    newNode = malloc(sizeof(struct Node));
    newNode -> data = num;
    newNode -> next = temp -> next;
    temp -> next = newNode;

}

void delete(struct Node **head, int pos){
    struct Node * temp = *head;
    struct Node * toFree;
    if(pos == 0){
        toFree = *head;
        *head = (*head)-> next;
        free(toFree);
        return;
    }
    for(int i = 0; i < pos - 1; i++){
        temp = temp -> next;
    }
    toFree = temp -> next;
    temp -> next = temp -> next -> next;
    free(toFree);
}

int main(){
    int n, num, pos, choice, exitFlag = 0;
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
    
    printf("\nLinked List Operstions:\n");
    printf("\n-----------------------\n");
    printf("\n1 -> Display\n2 -> Insert at begining\n3 -> Insert at end\n4 -> Insert at position\n5 -> Delete\n0 -> Exit\n");
    while(!exitFlag){
    printf("\nEnter your Choice :\n");
    scanf("%d",&choice);
    switch (choice){
        case 1:

            display(head);
            break;

        case 2:

            printf("\nEnter element to insert at begining: \n");
            scanf("%d", &num);

            insertAtBeginning(&head,num);
            n++;
            break;

        case 3:

            printf("\nEnter element to insert at end :\n");
            scanf("%d",&num);

            insertAtEnd(&head,num);
            n++;
            break;

        case 4:

            printf("\nEnter position to insert: \n");
            scanf("%d",&pos);

            if (pos > n){
                printf("\nOut of Range\n");
                break;
            }
            printf("\nEnter element to add at position: \n");
            scanf("%d",&num);

            if (pos == 0){
                insertAtBeginning(&head,num);
                n++;
                break;
            }
            
            insertAtPosition(&head,pos,num);
            n++;
            break;

        case 5:

            printf("\nEnter position to delete: \n");
            scanf("%d",&pos);

            if (pos > n){
                printf("\nOut of Range\n");
                break;
            }

            delete(&head, pos);
            n--;
            break;

        case 0:

            exitFlag = 1;
            break;
        
        default:
            
            printf("\nInvalid Choice\n");   
    }
    }
    return 0;
}