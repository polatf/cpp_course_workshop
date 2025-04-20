#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2 {"Fethullah"};
    string s3 {"Polat"};
    string s4 {s2,4};

    string part1;
    part1 = "C++";
    string part2;
    part2 = " is powerfull ";
    string sentence;
    sentence = part1 + part2 + "language";

    cout<<sentence<<endl;
    cout<<s2[3]<<endl;
    
    for(char c : s2)
    {
        cout<<c<<endl;
    }
    for(int a : s3)
    {
        cout<<a<<endl;
    }

    string f;
   // cin>>f;
   // cout<<"1-) "<<f<<endl; 
    getline(cin,f);
    cout<<"2-) "<<f<<endl;

    f[0] = 'K';
    cout<<f<<endl;

    return 0;
}