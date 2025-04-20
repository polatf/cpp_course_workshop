#include <iostream>
#include <random>
using namespace std;

int main()
{
    int random_number{}, number{}, count{1};

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 100);

    random_number = distrib(gen);

    do
    {
        
        cout<<"Please enter the number (0-100): ";
        cin>>number;

        if (number > random_number)
        {
            cout<<"Small!\n";
            count++;
        }
        else if (number < random_number)
        {
            cout<<"More!\n";
            count++;
        }
        else if(number == random_number)
        {
            cout<<"That's True\nCongrulations!!!"; 
            break;
        }

    } 
    while (count <= 5);
   
        cout<<"You Loss...\n";
        cout<<"The correct number was "<<random_number<<endl;

    return 0;
}