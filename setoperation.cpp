#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Union(vector<int>A ,vector<int>B ,vector<int>&C){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int i=0,j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]==B[j]){
            C.push_back(A[i]);
            i++;
            j++;
        }
        else if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else {
            C.push_back(B[j]);
            j++;
        }
    }

    while(i<A.size()){
        C.push_back(A[i]);
        i++;
    }
    while(j<B.size()){
        C.push_back(B[j]);
        j++;
    }
}

void Intersection(vector<int>A ,vector<int>B ,vector<int>&C){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int i=0,j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]==B[j]){
            C.push_back(A[i]);
            i++;
            j++;
        }
        else if (A[i] < B[j]) {
            i++;
        }
        else {
            j++;
        }
    }
}
void print(vector<int>arr){
    for(auto w:arr){
        cout << w <<" ";
    }
    cout<<endl;
}

int main(){
    int n,m;
    cout<<"Enter size of first and second vector : ";
    cin>>n>>m;
    vector<int> A(n);
    vector<int> B(m);

    //First array
    cout<<"Enter elements of array A : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    //Second Array
    cout<<"Enter elements of array B : ";
    for(int i=0;i<m;i++){
        cin>>B[i];
    }

    //Third arrray
    vector<int> C;

    //Union of array
    Union(A,B,C);
    cout<<"Union of two arrays is : ";
    print(C);

    //Intersection of array
    Intersection(A,B,C);
    cout<<"Intersection of two arrays is :";
    print(C);
    
    return 0;
}