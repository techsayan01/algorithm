//Given an array arr[] of n elements, write a function to search a given element x in arr[].
#include<iostream>

using namespace std;

int main(){
    int n, x;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
           cout<<"Element Found"<<endl;
           break;
        }
    }
    return 0;
}
