#include <iostream>

using namespace std;

int fact(int n){

    if(n==0){
        return 1;
    }

    if(n>0){
        return fact(n-1)*n;
    }



}

int main(){

    int n;
    cin >> n;

    int ans;
    ans=fact(n);
    cout<<ans1;


    return 0;
}
