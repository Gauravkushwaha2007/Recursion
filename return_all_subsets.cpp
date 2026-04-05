#include <iostream>
#include <vector>
using namespace std;

void getAllSubsets(vector<int> &array, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
    if(i == array.size()){
        allSubsets.push_back(ans);
        return;
    }
    
    //include
    ans.push_back(array[i]);
    getAllSubsets(array, ans, i+1, allSubsets);

    ans.pop_back();
    //exclude
    getAllSubsets(array, ans, i+1, allSubsets);
}
 
vector<vector<int>> subsets(vector<int> &array){

    vector<vector<int>> allSubsets;    //declare empty varable
    vector<int> ans;    //declare empty variable
    getAllSubsets(array, ans, 0, allSubsets);
    return allSubsets;
}

int main(){

    vector<int> array = {1,2,3};
    vector<vector<int>> result = subsets(array);

    for(auto subset: result){
        cout<<"{";
        for(auto val: subset){
            cout<< val <<  " ";
        }
        cout<< "}";
        cout<< endl;
    }

    return 0;
}