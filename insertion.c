#include <stdio.h>

void insertion(int arr[], int n){
    for (int j = 1; j < n; j++){
        int key = arr[j];
        int i = j - 1;

        while (i >= 0 && arr[i] > key){
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n = 7;
    int arr[] = {1, 7, 4, 8, 2, 3, 5};
    printf("Array before sorted: ");
    display(arr, n);
    insertion(arr, n);
    printf("Array After sorted: ");
    display(arr, n);
    return 0;
}