#include <iostream>
using namespace std;

int main()
{
    int rowcount,colcount;
    cout<<"Enter RowCount"<<endl;
    cin>>rowcount;
    for (int row=1;row<=rowcount;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }


    cout<<endl;
    }

  return 0;
}
