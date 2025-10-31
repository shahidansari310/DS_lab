#include <stdio.h>

void bubble(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {          
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {         
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n=7;
    int arr[]={1,7,4,8,2,3,5};
    printf("Array before sorted: ");
    display(arr,n);
    bubble(arr,n);
    printf("Array After sorted: ");
    display(arr,n);
    return 0;
}