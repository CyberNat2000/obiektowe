#include <iostream>
#include <string>

using namespace std;
char kodowanie(char znak, int liczba){
    znak = toupper(znak);
    if(znak+liczba<=90) return znak+liczba;
    else return znak+liczba-26;
}
/*char dekodowanie(char znak, int liczba){
    znak = toupper(znak);
    if(znak-liczba>=64) return znak-liczba;
    else return znak-liczba+26;
}*/
int main(){
    string wiadomosc;
    int liczba;
    string szyfr;
    cout<<"Podaj zdanie do szyfrowania"<<endl;
    cin>>wiadomosc;
    cout<<"Podaj liczbę mniejszą od 26"<<endl;
    cin>>liczba;
    for(int i=0; i<wiadomosc.length(); i++){
        szyfr+= kodowanie(wiadomosc[i], liczba);
    }
    cout<<"zaszyfrowana wiadomośc to: "<<szyfr<<endl;
}
