    //Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].
    
    #include<iostream>
    
    using namespace std;
    
   int binarySearch(int arr[], int left, int right, int x)
   {
       while(left <=  right){
           int mid = left + (right - left) / 2;
           if(arr[mid] == x) return mid;
           if(arr[mid] < x){
               return binarySearch(arr, mid+1, right, x);
           }
           if(arr[mid] > x){
               return binarySearch(arr, left, mid-1, x);
           }
       }
       return -1;
   }
   
   int main(void)
   {
       //Embedding the input part in the code piece itself
       int arr[] = {2, 3, 4, 10, 40};
       int n = sizeof(arr)/sizeof(arr[0]);
       int x = 10;
       int result = binarySearch(arr, 0 , n-1, x);
       result == -1 ? cout << "Not Found" << endl : cout << "Found" << endl;
       return 0;
   }
