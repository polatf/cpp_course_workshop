#include <iostream>
using namespace std;

int main()
{
    int mt_1{}, mt_2{}, final{},re_take{};
    double score{},new_score{};
    string letter_grade{};
    
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

    return 0;
}