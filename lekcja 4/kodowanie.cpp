#include <iostream>
#include <string>

using namespace std;
char kodowanie(char znak, int liczba){
    znak = toupper(znak);
    if(znak+liczba<=90) return znak+liczba;
    else return znak+liczba-26;
}
char dekodowanie(char znak, int liczba){
    znak = toupper(znak);
    if(znak-liczba>=65) return znak-liczba;
    else return znak-liczba+26;
}
int main(){
    string wiadomosc;
    int liczba;
    string szyfr;
    cout<<"Podaj zdanie do szyfrowania"<<endl;
    getline(cin, wiadomosc);
    cout<<"Podaj liczbę mniejszą od 26"<<endl;
    cin>>liczba;
    for(int i=0; i<wiadomosc.length(); i++){
        if(toupper(wiadomosc[i])<91&&toupper(wiadomosc[i])>64)
        szyfr+= kodowanie(wiadomosc[i], liczba);
        else szyfr+= wiadomosc[i];
    }
    cout<<"zaszyfrowana wiadomośc to: "<<szyfr<<endl;
    string Szyfr=szyfr;
    szyfr= "";
    for(int i=0; i<Szyfr.length(); i++){
        if(toupper(wiadomosc[i])<91&&toupper(wiadomosc[i])>64)
        szyfr+= dekodowanie(Szyfr[i], liczba);
        else szyfr+= Szyfr[i];
    }
    cout<<"zdekodowana wiadomośc to: "<<szyfr<<endl;
}
