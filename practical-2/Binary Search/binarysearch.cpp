#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return mid;
    
        }
        if(arr[mid] <target){
            left = mid +1;
        }else{
            right = mid -1;
        }
    }
    return -1;  

}

int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to search for: ";
    cin>>target;
    int result = binarySearch(arr, n, target);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index "<<result<<endl;
    }
    return 0;
}