#include <iostream>
using namespace std;

int main()
{
    int short_side{0};
    int long_side{0};
   
    cout<<"Please enter the short side of the room:";
    cin>>short_side;
    cout<<"Please enter the long side of the room:";
    cin>>long_side;

    int area_room = short_side*long_side;
    cout<<"Your room's area "<< area_room << endl;
    return 0;    
}