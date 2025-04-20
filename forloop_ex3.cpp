#include <iostream>
using namespace std;

int main()
{
    int sum{},value{};
    
    cout<<"Please enter the value: ";  
    cin>>value;

    for (int i = 1; i <= value ; i++)
    {
        sum += i;
    }
        cout<<"Sum of numbers from 1 to "<<value<<" is: " <<sum<<endl;

    return 0;
}