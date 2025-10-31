#include <stdio.h>

void selection(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        int key = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[key]) {
                key = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
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
    selection(arr,n);
    printf("Array After sorted: ");
    display(arr,n);
    return 0;
}