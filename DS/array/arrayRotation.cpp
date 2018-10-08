//Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

//Not yet complete, need to solve it again

//Formula for the same is
//
//(i - (d % n) + n ) % n 

#include<iostream>
using namespace std;

int main(){
    int n, d;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the rotation quotient"<<endl;
    cin>>d;
    cout<<"Enter the numbers"<<endl;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //rotate the array
    //int backup = arr[0], newValue = arr[0];
    for(int i = 0; i < n; i++){
        swap = arr[i];
        swap = arr[(i - (d % n) + n) % n];

    }
    for(int i = 0; i < n; i++){
         cout<<arr[i];
    }
    cout<<endl;
    return 0;
}

