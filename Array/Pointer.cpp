#include<iostream>
using namespace std;

struct Rectangle{

    int length;
    int breadth;

};

int main(){

    //struct Rectangle r;
  struct Rectangle r ={2,4};
  int *p = &r.length;

    cout<<*p<<endl;

    *p=10;

    cout<<*p<<endl;
cout<<





    return 0;
}
