#include <iostream>
using namespace std;

int main()
{
    int value{};

    cout<<"Please enter the value:";
    cin>>value;

    for (int i = 1; i <= value; i++)
    {

        if (i%3 == 0 && i%5 == 0)
        {
            cout<<i<<endl;
        }
        
    }
    
    
    
    
    return 0;
}