#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sumaL;
    int sumaP;
    string CiagZnakow;
    char Znak;
    cout << "Podaj ciąg znaków" << endl;
    getline(cin, CiagZnakow);
    for(int i=0; i<CiagZnakow.length(); i++){
        Znak=CiagZnakow[i];
        if(Znak==40){
            sumaL++;
        }
        else if(Znak==41){
            sumaP++;
        }
    }
    if(sumaL==sumaP) cout << "Poprawne sparowanie nawiasów" << endl;
    else cout << "Błędne sparowanie nawiasów" << endl;
    return 0;
}