#include <iostream>

using namespace std;
float waga, wzrost;
int main()
{
    cout <<"Podaj swój wzrost w metrach"<<endl;
    cin >>wzrost;
    cout <<"Podaj swoją wagę"<<endl;
    cin >>waga;
    float BMI=waga/(wzrost*wzrost);
    cout <<"twoje BMI to "<<BMI<<endl;
        if(BMI<16){
            cout <<"masz wygłodzenie"<<endl;
        }
        else if(BMI>16&&BMI<17){
            cout <<"masz wychudzenie"<<endl;
        }
        else if(BMI>17&&BMI<18.49){
            cout <<"masz niedowagę"<<endl;
        }
        else if(BMI>18.49&&BMI<25){
            cout <<"masz wagę prawidłową"<<endl;
        }
        else if(BMI>25&&BMI<30){
            cout <<"masz nadwagę"<<endl;
        }
        else if(BMI>30&&BMI<35){
            cout <<"masz otyłość 1 stopnia"<<endl;
        }
        else if(BMI>35&&BMI<40){
            cout <<"masz otyłość 2 stopnia"<<endl;
        }
        else if(BMI>40){
            cout <<"Jesteś mega spasiony"<<endl;
        }
}
