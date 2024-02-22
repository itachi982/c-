#include <iostream>
using namespace std;

int main()
{
    int rowcount,colcount;
    cout<<"Enter rows"<<endl;
    cin >> rowcount;
    colcount=rowcount;

    for(int row=1;row<=rowcount;row++)
    {
        for(int space=colcount;space>0;space--)
        {
            cout<<" ";

        }

        colcount--;

        for (int star=1;star<=row;star++)
            {

                cout<<"* ";
            }
        cout<<endl;
    }





  return 0;
}


