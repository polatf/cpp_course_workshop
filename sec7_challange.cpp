#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vector_1;
    vector <int> vector_2;
    vector<vector<int>> vector_2d;
    
    vector_1.push_back(10);
    vector_1.push_back(20); 
    cout<<"The Size of Vector1 is: "<<vector_1.size()<< endl;
    vector_2.push_back(100);
    vector_2.push_back(200);
    cout<<"The second element of the vector 2 is: "<<vector_2.at(1)<< endl;
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2); 
    cout<<"The (1,1)th element of the vector_2d is: "<< vector_2d.at(0).at(0) << endl;
    cout<<"The (1,2)th element of the vector_2d is: "<< vector_2d.at(0).at(1) << endl;
    cout<<"The (2,1)th element of the vector_2d is: "<< vector_2d.at(1).at(0) << endl;
    cout<<"The (2,2)th element of the vector_2d is: "<< vector_2d.at(1).at(1) << endl;

    cout << endl;
    return 0;
}