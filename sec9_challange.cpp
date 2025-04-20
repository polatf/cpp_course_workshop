#include <iostream>
#include <vector>

using namespace std;

enum choice {

    print = 1,
    add = 2,
    mean = 3,
    smallest = 4,
    largest = 5,
    quit = 6,
};

int main() 
{
    int button{};
    int number{};
    int sum{0};
    double average{};
    vector<int> list {};

   do
   {
    cout<<"\n----------------------------\n";
    cout<<"1. Print numbers\n";
    cout<<"2. Add a number\n";
    cout<<"3. Display mean of the numbers\n";
    cout<<"4. Display the smallest number\n";
    cout<<"5. Display the largest number\n";
    cout<<"6. Quit";
    cout<<"\n----------------------------\n";

    cout<<"Enter your choice:";
    cin>>button;

    choice choose = static_cast<choice>(button);

    switch (choose)
    {
    case print:

        if (list.size() == 0)
        {
            cout<<"[] - the list is empty";
        }
        else
        {
            for (auto val : list)
            {
                cout<<val<<endl;
            }   
        }

        break;
    
    case add: 

        cout<<"Please enter the number:";
        cin>>number;
        list.push_back(number);
        cout<<number<<" added the list.\n";

        break;

    case mean:
        for (auto val : list)
        {
            sum += val;
            average = static_cast<double>( sum / list.size() );
        }
        cout<<average<<endl;

        break;

    case smallest:

        if (list.size() == 0)
        {
            cout<<"The list is empty.";
        }
        else
        {
            int min_num = list[0];

                for (auto num : list)
                {
                    if (num < min_num)
                    {
                        min_num = num;
                    }
                }   
                cout<<"The smallest number of the list is "<<min_num<<endl;
        }
        break;
    
    case largest:
    
    if (list.size() == 0)
    {
        cout<<"The list is empty.";
    }
    else
    {
        int max_num = list[0];

            for (auto num : list)
            {
                if (num > max_num)
                {
                    max_num = num;
                }
            }   
            cout<<"The largest number of the list is "<<max_num<<endl;
    }
        break;

    default:
        cout<<"Invalid choosen.";
        break;
    }
   } while (button != 6);
   
   
    return 0;
}
