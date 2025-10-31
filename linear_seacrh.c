#include <stdio.h>

int linear(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n=7;
    int arr[]={1,7,4,8,2,3,5};
    int key;
    printf("Enter a key to search: ");
    scanf("%d",&key);
    int b=linear(arr,n,key);
    if(b==-1){
        printf("Value Not Found!");
    }
    else{
        printf("Value found at %d index",b);
    }
    return 0;
}