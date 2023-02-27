#include <iostream>

using namespace std;

int main()
{
    int liczba1;
    int liczba2;
    int liczba3;
    int liczba4;
    cout<<"podaj pierwszą liczbę"<<endl;
    cin>>liczba1;
    cout<<"podaj drugą liczbę"<<endl;
    cin>>liczba2;
    cout<<"podaj trzecią liczbę"<<endl;
    cin>>liczba3;
    cout<<"podaj czwartą liczbę"<<endl;
    cin>>liczba4;
    float suma = (liczba1+liczba2+liczba3+liczba4)/4;
    cout<<"średnia artmetyczna to:"<<suma<<endl;
}