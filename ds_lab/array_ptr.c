#include <stdio.h>
#include <stdlib.h>

void create(int n, int *ptr){
    for(int i = 0; i<n ; i++){
        printf("Enter Element : \n");
        scanf("%d",&ptr[i]);
    }
}

void display(int n, int *ptr){
    printf("\nArray Elements\n");
    printf("---------------\n");
    for(int i = 0; i < n; i++){
        printf("%d\n",ptr[i]);
    }
}

void insertAtPosition(int n, int *ptr, int pos, int num){
    for(int i = n-2; i >= pos; i--){
        ptr[i +1] = ptr[i];
    }
    ptr[pos] = num;
}

void delete(int n,int pos, int *ptr){
    for(int i = pos; i < n-1; i++){
        ptr[i] = ptr[i +1];
    }

}

int main(){
    int n, *ptr, pos, num, choice, exit_flag = 0;

    printf("Enter Size of Array: \n");
    scanf("%d",&n);

    ptr = malloc(sizeof(int) * n);

    create(n,ptr);
    display(n,ptr);

    printf("\nArray Operations\n");
    printf("-------------------\n");
    printf("1 -> display\n2 -> Insert\n3 -> Delete\n0 -> Exit\n");

    while(!exit_flag){

    printf("Enter choice : ");
    scanf("%d",&choice);

    switch (choice){
        case 1:
            display(n,ptr);
            break;
        case 2:
            printf("Enter position to insert element :\n");
            scanf("%d",&pos);
            printf("Enter new element to insert :\n");
            scanf("%d",&num);
            n++;
            ptr = realloc(ptr, sizeof(int) * n);
            insertAtPosition(n,ptr,pos,num);
            break;
        case 3:
            printf("Enter position to delet: \n");
            scanf("%d",&pos);
            delete(n,pos,ptr);
            n--;
            break;
        case 0:
            exit_flag = 1;
            break;
        default:
            printf("Invalid Choice\n");

        }
    }

    free(ptr);
    return 0;

}