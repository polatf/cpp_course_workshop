#include <iostream>
using namespace std;

int main()
{
    int sum{},value{};
    
    cout<<"Please enter the value: ";  
    cin>>value;

    for (int i = 1; i <= value; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    
        cout<<sum<<endl;

    return 0;
}