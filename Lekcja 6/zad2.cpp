#include <iostream>
#include <string>

using namespace std;

int main()
{
    string odwrocony;
    string CiagZnakow;
    cout << "Podaj ciąg znaków" << endl;
    getline(cin, CiagZnakow);
    for(int i=0; i<CiagZnakow.length(); i++){
        odwrocony += CiagZnakow[(CiagZnakow.length())-(i+1)];
    }
    cout << "Odwrócony łańcuch to \"" << odwrocony << "\"" << endl;
    return 0;
}