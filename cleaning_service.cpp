#include <iostream>
using namespace std;

int main()
{
    const int fee_small{60};
    const int fee_large{85};
    const float tax{0.18};

    int small_room;
    cout<<"How many small rooms were rented today?";
    cin>>small_room;
    int large_room;
    cout<<"How many large rooms were rented today?";
    cin>>large_room;
    float tax_pay{0};
    tax_pay = (small_room*fee_small + large_room*fee_large)*tax;
    int cost{0};
    cost = (small_room*fee_small + large_room*fee_large);
    cout<<"Cost: "<<cost<<" Dollars"<<endl;
    cout<<"Tax: "<<tax_pay<<" Dollars"<<endl;
    cout<<"Total fee: "<<cost+tax_pay<<" Dollars"<<endl;

    return 0;
}