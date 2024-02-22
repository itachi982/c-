#include<iostream>

using namespace std;

struct Rectangle{

    int length;
    int breadth;

};

int main(){

    //struct Rectangle r;
    struct Rectangle r ={2,4};

    cout<<sizeof(r)<<endl;
    cout<<r.length<<endl<<r.breadth<<endl;
    

    return 0;
}