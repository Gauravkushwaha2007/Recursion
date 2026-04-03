
#include <iostream>
using namespace std;
int fact(int n){
    if(n== 1){
        return 1;
    }
    return n* fact(n-1);
}

int main(){
    while(cin){
        int n;
        cout<< "Enter Number to Find factorial : ";
        cin>> n;
        cout<< "Factorial of "<< n << " is : " << fact(n) << endl;
    }
    return 0;
}

