#include <stdio.h>

int binary(int arr[],int s,int e,int key){
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,4,5,6,7,8};
    int n=7;
    int key;
    printf("Enter the element to search : ");
    scanf("%d",&key);
    int b=binary(arr,0,n-1,key);
    if(b==-1){
        printf("Value not found!");
    }
    else{
        printf("Value found at %d index",b);
    }
    return 0;
}