#include <iostream>

using namespace std;


int power(int n ,int m){

if(n==0){
    return 0;
}

if(m==0){
    return 1;
}

if(n>0 && m>0){

    return n*power(n,m-1);
}




}

int main(){

int x;
int y;

cout << "Enter base" <<endl;
cin >> x;

cout << "Enter power" << endl;
cin >>y;

int ans;

ans=power(x,y);

cout << ans <<endl;



return 0;
}
