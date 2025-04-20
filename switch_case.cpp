#include <iostream>
#include <string>
using namespace std;

enum Department {

    engineering = 1,
    medicine = 2,
};

int main()
{
    int which_dep{};
    int mt_1{};
    int mt_2{};
    int ct_1{}, ct_2{},ct_3{},ct_4{},ct_5{},ct_6{};
    int final{};
    int re_take{};

    double score{};
    double new_score{};
    string letter_grade{};

    cout<<"Welcome !!!\n";
    cout<<"1. Engineering\n";
    cout<<"2. Medicine\n";
    cout<<"Which department are you studying in?(1-2): ";
    cin>>which_dep;

    Department chosendepartment = static_cast<Department>(which_dep);

    switch(chosendepartment)
    {
    case engineering:

            cout<<"Please enter the midterm 1: ";
            cin>>mt_1;
            cout<<"Please enter the midterm 2: ";
            cin>>mt_2;
            cout<<"Please enter the final note: ";
            cin>>final;

            score = static_cast<double>(mt_1*0.3 + mt_2*0.3 + final*0.4);

            cout<<"Your score is "<<score<<endl;

            if (score >= 80)
            {
                if (score >=90 && final >= 80)
                {
                    letter_grade = "A+";
                }
                else
                {
                    letter_grade = "A";
                }
            }
            else if (score >= 65)
            {
                if (score >=75 && final >= 65)
                {
                    letter_grade = "B+";
                }
                else
                {
                    letter_grade = "B";
                }
            }
            else if (score >= 50)
            {
                if (score >= 60 && final >= 50)
                {
                    letter_grade = "C+";
                }
                else
                {
                    letter_grade = "C";
                }
            }
            else if (score >= 40)
            {
                if (score >= 45 && final >= 40)
                {
                    letter_grade = "D+";
                }
                else
                {
                    letter_grade = "D";
                }
            }
        else if (score <= 39)
        {
            cout<<"Please enter the re-take exam note:";
            cin>>re_take;

            new_score = static_cast<double>(mt_1*0.3 + mt_2*0.3 + re_take*0.4);

            cout<<"Your score is "<<new_score<<endl;

            if (new_score >= 50 && re_take >= 50)
            {
                letter_grade = "C";
            }
            else
            {
                letter_grade = "F";
            }
        }

        cout<<"Your letter grade is: "<<letter_grade<<endl;
        break;

    case medicine:

        cout<<"Please enter the commitee 1: ";
        cin>>ct_1;
        cout<<"Please enter the commitee 2: ";
        cin>>ct_2;
        cout<<"Please enter the commitee 3: ";
        cin>>ct_3;
        cout<<"Please enter the commitee 4: ";
        cin>>ct_4;
        cout<<"Please enter the commitee 5: ";
        cin>>ct_5;
        cout<<"Please enter the commitee 6: ";
        cin>>ct_6;
        cout<<"Please enter the final note: ";
        cin>>final;

        score = static_cast<double>((ct_1+ct_2+ct_3+ct_4+ct_5+ct_6)*0.6/6 + final*0.4);

        cout<<"Your score is "<<score<<endl;

        if (score >= 50 && final >= 50)
        {
            cout<<"Congrulations! You pass the term.";
        }
        else
        {
            cout<<"Please enter the re-take exam note:";
            cin>>re_take;

            new_score = static_cast<double>((ct_1+ct_2+ct_3+ct_4+ct_5+ct_6)*0.6/6 + re_take*0.4);

            if (new_score >= 50 && re_take >= 50)
            {
                cout<<"Congrulations! You pass the term.";
            }
            else
            {
                cout<<"Try Again...";
            }
            
            

        }
        break;

    default:
        cout<<"Wrong.";
        break;
    }

    return 0;
}