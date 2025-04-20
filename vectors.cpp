#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> test_scores (10);
    vector<string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    vector<double> temperature (3);

    cout<<"The third day of the week is: "<< days[2] << endl;
    cin>>test_scores[7];
    cout<<"The 8th person test score is: "<< test_scores[7]<< endl;
    cin>> temperature.at(2);
    cout<<"The 3rd temperature is: "<<temperature.at(2)<< endl; //.at vektördeki değerin lokasyonunu veriyor.
    test_scores.push_back(58); //.push_back ise vektöre dilediğin değeri ekliyor.
    cout<<"The 11th person test score is: "<<test_scores[10]<< endl;

    return 0;
}