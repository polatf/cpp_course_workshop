#include <iostream>
using namespace std;

int main()
{
    int test_scores[5] {100,85,70,60,45};
    int days_in_year[365] {0};
    double another_array[] {8.75,99.11,17.66,41.3,-8.75};

    cout<<"First index in test scores: "<< test_scores[0] << endl;
    cout<<"Second index in another array: " << another_array[1] << endl;
    cout<<"77th index in days in year: " << days_in_year[76] << endl;
    cin>> days_in_year[124];
    cin>> test_scores[4];

    cout<<"New 5th element of the test scores is: " <<test_scores[4] << endl;
    cout<<"New 123th element of the days in year is: " <<days_in_year[124] << endl;

    return 0;
}