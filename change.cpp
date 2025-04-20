#include <iostream>
using namespace std;

int main()
{
    const double euro {39.82};
    const double dollar {36.68};
    const double gold {3526.31};
    double gram{0};

    cout<<"How much the change of the gram gold?: ";
    cin>>gram;
    double tur_lira = gram*gold;
    cout<<"You have "<< tur_lira <<" Turkish Liras\n";
    cout<<"This is "<< tur_lira/euro <<" Euros\n";
    cout<<"This is "<< tur_lira/dollar <<" Dollars\n";

    return 0;
}