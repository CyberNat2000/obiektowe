#include <iostream>

using namespace std;
int main()
{
    int pesel[11];
    
    int tablica[10]={1,3,7,9,1,3,7,9,1,3};
    cout << "podaj PESEL" << endl;
    for(int i=0; i<11; i++){
        cin >> pesel[i];
    }
    int weryfikacja = 0;
        for(int i=0; i<10; i++){
            weryfikacja += (tablica[i] * pesel[i])%10; 
        }
        if(10-(weryfikacja%10)==int(pesel[10])){
            cout << "PESEL poprawny" << endl;
            if(pesel[9]%2==0){
                cout << "Jesteś kobietą" << endl;
            }
            else{
                cout << "Jesteś mężczyzną" << endl;
            }
        }
        else {
        cout << "PESEL niepoprawny" << endl;
        }
    return 0;
}          