#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> temperature;
    vector<string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    double value{}, average{}, sum{};

    cout<<"Please enter temperatures(Celcius) of this week:\n";

    for (int i = 0; i < 7; i++)
    {
        cout<<days[i]<<"--> ";
        cin>>value;
        temperature.push_back(value);
    }
    for (auto temperature : temperature)
    {
        sum += temperature;
    }
    
    average = sum / 7;

    cout<<"Average of the temperature this week: "<<average<<endl;

    return 0;
}