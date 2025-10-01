/********************************
*Имя:Солдатов Владимир Сергеевич*
*Вариант:12                     *
*********************************/

#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    double a , b; //a= 3.24 // b= 1.72
     
    cout << "Enter the valueа" << endl;
    cin >> a;
      
    cout << "Enter the value b" << endl;
    cin >> b;
    
    double e, s1, v1, s2, v2;

    e = sqrt(1.0 - (b * b) / (a * a));
    s1 = 2.0 * M_PI * (b * b + a * b * atan(e / sqrt(1 - e * e)) / e) / 10000.0;
    v1 = 4.0 * M_PI * a * b * b / 3000000.0;
    s2 = 2.0 * M_PI * (a * a + b * b * log((1 + e) / (1 - e)) / (2 * e)) / 10000.0;
    v2 = 4.0 * M_PI * a * a * b / 3000000.0;

    cout << fixed << setprecision(6);

    cout << "S1=" << s1 << endl << "V1=" << v1 << endl << "S2=" << s2 << endl << "V2=" << v2 << endl;

    return 0;
}
