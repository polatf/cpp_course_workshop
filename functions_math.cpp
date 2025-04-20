#include <iostream>
#include <cmath>

using namespace std;

enum Restaurant {

    Kebapci = 1,
    Kanatci = 2,
    Pilavci = 3,

};

void reustaurant_1(){
    double total_bill;
    double individual_bill;
    int person;

    cout<<"How many person to pay the bill:";
    cin>>person;
    cout<<"Total bill: ";
    cin>>total_bill;

    individual_bill = static_cast<double>(total_bill / person);
    cout<<"individual bill fee: "<<floor(individual_bill);
}

void reustaurant_2(){
    double total_bill;
    double individual_bill;
    int person;

    cout<<"How many person to pay the bill:";
    cin>>person;
    cout<<"Total bill: ";
    cin>>total_bill;

    individual_bill = static_cast<double>(total_bill / person);
    cout<<"individual bill fee: "<<round(individual_bill);
}

void reustaurant_3(){
    int bill;
    double total_bill;
    double individual_bill;
    int person;

    cout<<"How many person to pay the bill:";
    cin>>person;
    cout<<"Total bill: ";
    cin>>bill;

    total_bill = 100*bill;
    individual_bill = static_cast<double>(total_bill / person);
    cout<<"individual bill fee(cent): "<<ceil(individual_bill/100);
}

int main()
{
    int which_res;

    cout<<"Welcome !!!\n";
    cout<<"1. Kebapci\n";
    cout<<"2. Kanatci\n";
    cout<<"3. Pilavci\n";
    cout<<"Which Restaurant was you ate in?(1-3): ";
    cin>>which_res;
    
    Restaurant chosenrestaurant = static_cast<Restaurant>(which_res);

    switch (chosenrestaurant)
    {
    case Kebapci:
        reustaurant_1();
        break;
    case Kanatci:
        reustaurant_2();    
        break;
    case Pilavci:
        reustaurant_3();
        break;

    default:
        break;
    }

    return 0;
}