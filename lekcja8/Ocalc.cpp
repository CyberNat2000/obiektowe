#include <iostream>
#include <cmath>
using namespace std;
class cal{
        public:
            void SetX(){
                std::cin >> x;
            }

            int dzialanie(float b, char znak){
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
                            std::cin >> y;
                            i--;
                            continue;
                            }
                        case '^':
                            return pow(x, y);
                        case '%':
                            return (int)x % (int)y;
                        default:
                            std::cout << "podano zly znak, prosze podac ponownie" << std::endl;
                            std::cin >> znak;
                            i--;
                            continue;
                }}
            }
            cal(int a){
                this->x = a;
            }
        private:
            int x
    };


class rze{
        public:
            void SetX(){
                std::cin >> x;
            }

            float dzialanie(float b, char znak){
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
                            std::cin >> y;
                            i--;
                            continue;
                            }
                        case '^':
                            return pow(x, y);
                        case '%':
                            return (int)x % (int)y;
                        default:
                            std::cout << "podano zly znak, prosze podac ponownie" << std::endl;
                            std::cin >> znak;
                            i--;
                            continue;
                }}
            }
            rze(float a){
                this->x = a;
            }
        private:
            float x
    };

int main()
{ 
    rze liczba = rze((float)4.6);
    float wynik = liczba.dzialanie(9, "/");
    cout << "Wynik to :"<<wynik<<endl;
    return 0;
}
