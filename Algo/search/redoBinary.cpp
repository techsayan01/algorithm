#include<iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    if(l <= r){
        int m = l + (r - l) / 2;
        if(arr[m] == x) return m;
        if(arr[m] > x) return binarySearch(arr, l, m-1, x);
        return binarySearch(arr, m+1, r, x);
    }
    return -1;
}

int main(){
    int arr[] = {4, 10, 11, 34, 41};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 12;
    int result = binarySearch(arr, 0, n-1, x);
    result == -1 ? cout << "Not found" << endl : cout << "Found" << endl;
    return 0;
}
