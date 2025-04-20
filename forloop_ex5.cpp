#include <iostream>
using namespace std;

int main()
{
    int sqr{},value{};
    
    cout<<"Please enter the value: ";  
    cin>>value;

    for (int i{1},j{1} ; i <= value; i++)
    {  
        if (i % 2 == 0)
        {
            sqr = i*i;
            cout<<j<<") "<<sqr<<endl;
            j++;
        }
    }

    return 0;
}