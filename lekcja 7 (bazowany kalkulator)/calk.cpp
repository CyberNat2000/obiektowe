#include <iostream>

using namespace std;

int main()
{
    float liczba1;
    float liczba2;
    char znak;
    int wynik;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> liczba1;
    cout << "Podaj znak dzialania" << endl;
    cin >> znak;
    cout << "Podaj druga liczbe" << endl;
    cin >> liczba2;
    for(int i=0; i<1; i++){
    switch(znak){
        case '+':
            wynik = liczba1 + liczba2;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            break;
        case '/':
            if(liczba2 !=0)
            wynik = liczba1 / liczba2;
            else {
                cout << "Nie mozna dzielic przez zero, podaj inna liczbe" << endl;
                cin >> liczba2;
                i--;
                continue;
            }
            break;
        case '%':
            wynik = (int)liczba1 % (int)liczba2;
            break;
        default:
            cout << "podano zly znak, prosze podac ponownie" << endl;
            cin >> znak;
            i--;
            continue;

    }}
    cout << "Wynik to :"<<wynik<<endl;
    return 0;
}
