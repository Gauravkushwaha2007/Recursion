#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int st, int mid, int end){
    vector<int> temp;
    int i = st; 
    int j = mid+1;
    int k = 0;

    while(i<=mid && j<=end){
        if(arr[i]<= arr[j]){
            temp.push_back(arr[i]);
            i++;
            k++;
        }else{
            temp.push_back(arr[j]);
            j++;
            k++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++; k++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++; k++;
    }

    for(int idx=0; idx<k; idx++){
        arr[st+idx] = temp[idx];
    }
}

void mergeSort(int arr[], int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;
        // Left subArray
        mergeSort(arr, st, mid);
        
        // Right subArray
        mergeSort(arr, mid+1, end);

        merge(arr, st, mid, end);
    }
}

int main(){

    int arr[] = {12,54,32,9,8,45};
    mergeSort(arr,0,5);

    for(int val : arr){
        cout<< val << " ";
    }
    cout<< endl;

    return 0;
}