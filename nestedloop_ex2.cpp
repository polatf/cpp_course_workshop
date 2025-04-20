#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num_items{};
    string object;
    vector<string> items {};

    cout<<"How many have the items?";
    cin>>num_items;

    for (int i = 1; i <= num_items; i++)
    {
        cout<<i<<". ";
        cin >> object;
        items.push_back(object);
    }
    for (auto val : items)
    {
        cout<<val<<endl;
    }
    
    return 0;
}