#include <iostream>

using namespace std;

int main() {

	int cent{},dolar{},quarter{},dime{},nickel{},penny{};
	cout<<"Please enter the what you have cents: ";
	cin>>cent;

	dolar = cent / 100;
	cent -= dolar*100;
	quarter = cent / 25;
	cent -= quarter*25;
	dime = cent / 10;
	cent -= dime*10;
	nickel = cent / 5;
	cent -= nickel*5;
	penny = cent;
	
	cout<<"Dolar: "<<dolar<<endl;
	cout<<"Quarter: "<<quarter<<endl;
	cout<<"Dime: "<<dime<<endl;
	cout<<"Nickel: "<<nickel<<endl;
	cout<<"Penny: "<<penny<<endl;

    cout << endl;
    return 0;
}