#include <stdio.h>

int insert(int arr[], int n, int pos){
    for(int i=n;i>pos;i--){
        arr[i] = arr[i+1];
    }
    arr[pos] = n;
    return 1;
}

int delete(int arr[],int pos){
    for(int i =pos; i < 15; i++){
        arr[i] = arr[i+1];
    }

}

int display(int arr[], int len){
    for(int i = 0; i < len; i ++){
        printf("Element %d : %d\n",i,arr[i]);
    }
    

}

int main(){
    int arr[15], n, choice, pos, len = 0;
    while(1){
        printf("Operations\n");
        printf("-----------\n");
        printf("1 -> Insert\n2 -> Delete\n3 -> Display\n0 -> Exit\nEnter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter Element\n");
            scanf("%d",&n);
            printf("Enter Position:\n");
            scanf("%d",&pos);
            len = len + insert(arr,n,pos);
            printf("\n");
            break;
        case 2:
            printf("Enter Position:\n");
            scanf("%d",&pos);
            delete(arr,pos);
            printf("Element at %d deleted",pos);
            len--;
            printf("\n");
            break;
        case 3:
            if (len == 0){
                printf("The array is empty\n");
            }                
            display(arr,len);
            printf("\n");
            break;
        case 0:
            return 0;
        default:
            break;
        }
    }

    return 0;   
}