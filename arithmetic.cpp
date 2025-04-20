#include <iostream>
using namespace std;

int main()
{
        double num1 {0};
        double num2 {0};
        int num3 {10};
        int num4 {3};

        cout<<"Please enter the number 1: ";
        cin>> num1;
        cout<<"Please enter the number 2: ";
        cin>> num2;

        double result = num1 + num2;
        cout<<"The Sum of the numbers are: "<< result << endl;
        double result1 = num1 - num2;
        cout<<"The substract of the numbers are: "<< result1 << endl;
        double result2 = num1 * num2;
        cout<<"The multiply of the numbers are: "<< result2 << endl;
        double result3 = num1 / num2;
        cout<<"The division of the numbers are: "<< result3 << endl;

        cout<<"The mod of num3 with by num4 is: "<< num3 % num4<< endl; //Sadece integer değerler arasında oluyor.


    return 0;
}