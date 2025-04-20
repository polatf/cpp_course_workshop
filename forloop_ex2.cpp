#include <iostream>
using namespace std;

int main()
{
    int value{};

    cout<<"Please enter the value:";
    cin>>value;

    for (int i = 2; i <= value; i++)
    {
        if (value % i == 0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}