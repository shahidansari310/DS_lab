#include <stdio.h>

int index_sequencial(int arr[],int n,int key){
    int x=3,i=0;
    int temp[n];
    for(int j=0;j<n;j+=x){
        temp[i]=j;
        i++;
    }
    int b=-1;
    for (int j = 0; j < i; j++) {
        if (arr[temp[j]]<=key && (j==i-1 || key<arr[temp[j+1]])) {
            b=j;
            break;
        }
    }
    if(b==-1)  return -1;
    int start=temp[b];
    int end=(start+x < n)? start+x : n;

    for(int j=start;j<end;j++) {
        if(arr[j]==key) return j;
    }

    return -1;
}

int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter value to find :");
    scanf("%d",&key);
    index_sequencial(arr,n,key);
    return 0;
}