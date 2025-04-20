#include <iostream>
using namespace std;

int main()
{
    int counter_a {10};
    int result_a {0};

    result_a = counter_a + 1;
    cout<<"result a: "<<result_a<<endl;
    cout<<"counter a: "<<counter_a<<endl;

    int counter_b {5};
    int result_b {0};

    result_b = counter_b++;
    cout<<"result b: "<<result_b<<endl;
    cout<<"counter b: "<<counter_b<<endl;

    int counter_c {57};
    int result_c {0};

    result_c = ++counter_c;
    cout<<"result c: "<<result_c<<endl;
    cout<<"counter b: "<<counter_c<<endl;

    return 0;
}