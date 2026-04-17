#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int a = 0, b = 0, brtCnt = 0;
    int m = 0;
    int znaki[20];
    string s;
    cout << "input: " << endl;
    cin >> s;
    for (char &c : s){
        if(c >= '0' && c <= '9'){
            znaki[m] = c - 48;
            //a +=  (int)(c-48) *pow(10, m);
            m++;
            cout << m << endl;
        }
        else {
            if(m!=0){
                reverse(znaki, znaki+m);
                for(--m; m>=0; m--){
                    cout << znaki[m] << endl;;
                    a += znaki[m] * pow(10,m);
                    cout << a << endl;
                }
                m++;
                }
            }
        cout << c <<endl;
        if(c == '(') brtCnt++;
        if(c == ')') brtCnt--;
    }
    return 0;
}
