#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int min{10};
    const int max{100};

    cout<<"Enter a number between "<<min<< " and "<<max<<" :";
    cin>>num;

    if (num > min)
    {
        cout<<num<<" is greater than "<<min<< endl;
    }
    if (num < max)
    {
        cout<<num<<" less than "<<max<< endl;
    }
    if (num > min && num < max)
    {
        cout<<num<<" is range.";
    }
    if (num == min)
    {
        cout<<num<<" equal to "<<min<<endl;
    }
    if (num == max)
    {
        cout<<num<<" equal to "<<max<<endl;
    }
    
    return 0;
}