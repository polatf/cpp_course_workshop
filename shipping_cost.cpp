#include <iostream>
using namespace std;

int main()
{
    int length{}, width{}, height{}, volume{};
    const double base_cost{2.5};
    double cost{};

    cout<<"Please enter the package length(m): ";
    cin>>length;
    cout<<"Please enter the package width(m): ";
    cin>>width;
    cout<<"Please enter the package height(m): ";
    cin>>height;

    volume = length*width*height;
    cost = static_cast<double>(volume*base_cost);

    cout<<"Package volume is "<<volume<<endl;

    if (length >= 4 && width >= 4 && height >=4)
    {
        if (volume >= 100 && volume < 500)
        {
            cost = static_cast<double> (cost*1.1);
            cout<<"Salary: "<<cost<<endl;
        }
        else if (volume >= 500)
        {
            cost = static_cast<double> (cost*1.25);
            cout<<"Salary: "<<cost<<endl;
        }
        else if (volume >= 1000)
        {
            cost = static_cast<double> (cost*1.5);
            cout<<"Salary: "<<cost<<endl;
        }
        else
        {
            cout<<"Salary: "<<cost<<endl;
        }
    }
    else
    {
        cout<<"Can not shipping.";
    }
    return 0;
}