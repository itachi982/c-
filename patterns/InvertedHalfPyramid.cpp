#include <iostream>
using namespace std;

int main()
{
    int rowcount,colcount;
    cout<<"Enter row count"<<endl;
    cin>>rowcount;
    colcount=rowcount;

    for(int row=1;row<=rowcount;row++){

            for(int col=colcount;col>0;col--){
                cout<<"*";
            }

    colcount--;
    cout<<endl;
  }

  return 0;
}


