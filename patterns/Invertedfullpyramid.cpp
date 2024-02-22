#include <iostream>
using namespace std;

int main()
{
    int rowcount,starcount;
    cout<<"Enter rows"<<endl;
    cin >> rowcount;
    starcount=rowcount;

    for(int row=1;row<=rowcount;row++)
    {
        for(int space=1;space<row;space++)
        {
            cout<<" ";

        }

        for (int star=starcount;star>0;star--)
            {

                cout<<"* ";
            }
        starcount--;
        cout<<endl;
    }





  return 0;
}


