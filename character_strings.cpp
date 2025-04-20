#include <iostream>
#include <vector>
#include <cstring>
#include <limits>

using namespace std;

int main()
{
    char first_name[20];
    char last_name[20];
    char full_name[20];
    char fullf_name[20];
    char temp[50];

    cout<<"Please enter the first name:";   
    cin>>first_name;
    cout<<"------------------------------\n";
    cout<<"Please enter the last name:";
    cin>>last_name;
    cout<<"------------------------------\n";

    strcpy(full_name,first_name); //User'dan alınan stringi full_name'e kopyaladık.
    strcat(full_name," ");
    strcat(full_name,last_name); //Hazır stringe last_name'i concatenate ettik. 

    cout<<"Welcome "<<full_name<<endl; 
    cout<<"------------------------------\n";
    cout<<first_name<<", Your name has "<<strlen(first_name)<<" characters."; 

    cout<<"\nPlease enter the father'S full name:";
    
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(fullf_name, 50);
    cout<<"\nYour father full name is "<<fullf_name<<endl;


    return 0;
}