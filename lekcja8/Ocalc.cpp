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
            xyz(float a, float b, char znak1){
                this->x = a;
                this->y = b;
                this->znak = znak1;
            }
        private:
            float x,y;
            char znak;
    };

int main()
{ 
    xyz liczba = xyz((float)4.6, (float)9, (char)"/");
    // dynamiczne które aktualnie nie jest potrzebne >>>> new xyz((float)4.5, (float)4.6, (char)"-");
    /*cout << "Podaj pierwsza liczbe" << endl;
    liczba.SetX();
    cout << "Podaj znak dzialania" << endl;
    liczba.SetZnak();
    cout << "Podaj druga liczbe" << endl;
    liczba.SetY(); */
    float wynik = liczba.dzialanie();
    cout << "Wynik to :"<<wynik<<endl;
    return 0;
}
