#include <iostream>
using namespace std;


// with the help of iteration (usign loop)
void check(int arr[],int size){
    for(int i=0; i<size-1; i++){
        if(arr[i] >= arr[i+1]){
            cout<< "\n|||Array isn't sorted||";
            return;
        }
    }
    cout<< "\n|||| Given array is sorted in Ascending order|||| \n";
}

// with the help of Recursion 

int main(){
    int arr[]= {4,24,25,1495,152,225};
    int size =  sizeof(arr)/sizeof(arr[0]);
    check(arr,size);
    return 0;
}