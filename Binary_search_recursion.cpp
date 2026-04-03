#include <iostream>
#include <vector>
using namespace std;

int Binary_search(int arr[], int target, int st, int end){
    if(st <= end ){
        int mid = (st+end)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            return Binary_search(arr, target, mid+1, end);
        }
        else if(target < arr[mid]){
            return Binary_search(arr,target, st, mid-1);
        }
    }
    return -1;
}

int main(){

    int arr[] = {2,4,6,8,10,12,14,16,20,89};
    cout<< Binary_search(arr, 4, 0, 10);

    return 0;
}