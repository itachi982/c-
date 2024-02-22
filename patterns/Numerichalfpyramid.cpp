#include <iostream>
using namespace std;

int main()
{
    int rowcount;
    cout<<"Enter Rows"<<endl;
    cin>>rowcount;

    for(int row=1;row<=rowcount;row++){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }




  return 0;
}


