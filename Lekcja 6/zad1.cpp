#include <iostream>
#include <string>

using namespace std;

int main()
{
    int powtorzenia= 1;
    string CiagZnakow;
    cout << "Podaj ciąg znaków" << endl;
    getline(cin, CiagZnakow);
    char Znak=CiagZnakow[(CiagZnakow.length())-1];
    for(int i=0; i<(CiagZnakow.length())-1; i++){
        if(CiagZnakow[i]==Znak){
            powtorzenia++;
        }
    }
    cout << "ostatni znak powtarza się "<< powtorzenia << " razy" << endl;
    return 0;
}