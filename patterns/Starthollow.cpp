

#include <iostream>
using namespace std;

int main()
{
    int rowCount,colCount;
    cout<<"enter rowCount,colCount"<<endl;
    cin>>rowCount;
    cin>>colCount;

 for(int row=0;row<rowCount;row++){
    for(int col=0;col<colCount;col++){

        if(row==0||row==rowCount-1){

            cout<<"*";
        }

        else{
            if(col==0||col==colCount-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

    }
    cout<<endl;
 }

  return 0;
}

