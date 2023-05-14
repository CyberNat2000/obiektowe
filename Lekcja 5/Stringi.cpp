#include <iostream>
#include <string>

using namespace std;

int main()
{
    string CiagZnakow[4];
    int dlugosc[4];
    cout << "Podaj 4 ciągi znaków" << endl;
    for(int i=0; i<4; i++){  
    cin >> CiagZnakow[i];
    }
    for(int i=0;i<4;i++){
		for(int j=1;j<4-i;j++){
		if(CiagZnakow[j-1].length()>CiagZnakow[j].length())
            swap(CiagZnakow[j-1], CiagZnakow[j]);
        }
    }

    for(int i=0; i<4; i++){ 
        
        cout << CiagZnakow[i] << " " << CiagZnakow[i].length() << " znaków" << endl;
    }
    return 0;
}