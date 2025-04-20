#include <iostream>
using namespace std;

int main()
{
    int exam_1{}, exam_2{}, exam_3{}, total_puan{};
    double average{0};

    cout<<"Please the enter the exam 1: ";
    cin>>exam_1;
    cout<<"Please the enter the exam 2: ";
    cin>>exam_2;
    cout<<"Please the enter the exam 3: ";
    cin>>exam_3;

    total_puan = exam_1 + exam_2 + exam_3;
    average = static_cast<double>(total_puan) / 3;

    cout<<"Your average is: "<<average<<endl;

    return 0;
}