#include <iostream>
#include <cmath>
using namespace std;

class xyz{
        public:
            void SetX(){
                std::cin >> x;
            }
            void SetY(){
                std::cin >> y;
            }
            void SetZnak(){
                std::cin >> znak;
            }

            int dzialanie(){
                for(int i=0; i<1; i++){
                    switch(znak){
                        case '+':
                            return x + y;
                        case '-':
                            return x - y;
                        case '*':
                            return x * y;
                        case '/':
                            if(y !=0)
                                return x / y;
                            else {
                            std::cout << "Nie mozna dzielic przez zero, podaj inna liczbe" << std::endl;
                            SetY();
                            i--;
                            continue;
                            }
                        case '^':
                            return pow(x, y);
                        case '%':
                            return (int)x % (int)y;
                        default:
                            std::cout << "podano zly znak, prosze podac ponownie" << std::endl;
                            SetZnak();
                            i--;
                            continue;
                }}
            }
        private:
            float x,y;
            char znak;
    };

int main()
{ 
    xyz liczba;
    cout << "Podaj pierwsza liczbe" << endl;
    liczba.SetX();
    cout << "Podaj znak dzialania" << endl;
    liczba.SetZnak();
    cout << "Podaj druga liczbe" << endl;
    liczba.SetY();
    float wynik = liczba.dzialanie();
    cout << "Wynik to :"<<wynik<<endl;
    return 0;
}
