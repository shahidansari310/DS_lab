#include <iostream>
#include <vector>
using namespace std;

void mergearray(vector<int>&arr1,vector<int>&arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int>temp;
    int l=0;
    int r=0;
    while(l<n1 && r<n2){
        if(arr1[l]<arr2[r]){
            temp.push_back(arr1[l]);
            l++;
        }
        else{
            temp.push_back(arr2[r]);
            r++;
        }
    }

    while(l<n1){
        temp.push_back(arr1[l]);
        l++;
    }

    while(r<n2){
        temp.push_back(arr2[r]);
        r++;
    }
    cout<<"Merge array: ";
    for(auto q:temp){
        cout<<q<<" ";
    }
    cout<<endl;
}


int main(){
    int n,p;
    cout<<"Enter size of fisrt array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter size of second array: ";
    cin>>p;
    vector<int>arr1(n);
    vector<int>arr2(p);

    cout<<"Enter elemnt of first array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter elemnt of first array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<endl;

    cout<<"First Array: ";
    for(auto w:arr1){
        cout<<w<<" ";
    }
    cout<<endl;

    cout<<"Second Array: ";
    for(auto q:arr2){
        cout<<q<<" ";
    }
    cout<<endl;

    mergearray(arr1,arr2);
    return 0;
}