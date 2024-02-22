
#include<iostream>
#include <vector>
using namespace std;


void Union(vector<int> arr, vector<int> arrr, vector<int>ans){

    for(int i=0;i<arr.size();i++){

        ans.push_back(arr[i]);
    }

    for(int i=0;i<arrr.size();i++){

        ans.push_back(arrr[i]);
    }

    for(int i=0;i<ans.size();i++){

        cout<<ans[i]<<" ";
    }

}


int main(){

    vector<int> arr{1,3,5,7,9};
    vector<int> brr{2,4,6,8,10};
    vector<int> ans;

    Union(arr,brr,ans);

    return 0;
}
