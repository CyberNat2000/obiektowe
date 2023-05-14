#include <iostream>
#include <string>

using namespace std;

int main()
{
    int suma;
    string CiagZnakow;
    char Znak;
    cout << "Podaj ciąg znaków" << endl;
    getline(cin, CiagZnakow);
    for(int i=0; i<CiagZnakow.length(); i++){
        Znak=CiagZnakow[i];
        if(Znak>47&&Znak<58){
        suma+=Znak-48;
        }
    }
    cout << "Suma cyfr w podanym ciągu znaków to " << suma << endl;
    return 0;
}