#include <iostream>
using namespace std;

void ortalama(){
    int toplam {0};
    double sonuc;
    int x;
    int counter;

    cout<<"Kac sayi girilecek: ";
    cin>>counter;

    for (int i = 1; i <= counter; i++)
    {
        cout<<i<<". sayi:";
        cin>>x;
        toplam += x;
    }

    sonuc = static_cast<double>(toplam / counter); 
    cout<<"Ortalama: "<<sonuc<<endl;
    
}


int karesiniAl(int a){
    return a*a;
}

void olceklendir(int b){
    cout<<"Maksimum: "<< b+50 <<"\nMinimum: "<< b-50 <<endl;
}

int main()
{
    int sayi;
    cout<<"Bir sayi giriniz:";
    cin>>sayi;
    cout<<"Karesi: "<<karesiniAl(sayi)<<endl;
    olceklendir(karesiniAl(sayi));

    ortalama();


    return 0;
}