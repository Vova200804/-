//**********************************//
//*Имя:Солдатов Владимир Сергеевич *//
//* Вариант:12                     *//
//**********************************//
      
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double a = 3.244; 
    const double b = 1.72;  

    double e = sqrt(1 - b * b / (a * a));
    double s1 = 2 * M_PI * (b * b + a * b * atan(e / sqrt(1 - e * e)) / e) / 10000; 
    double v1 = 4 * M_PI * a * b * b / 3000000; 
    double s2 = 2 * M_PI * (a * a + b * b * log((1 + e) / (1 - e)) / (2 * e)) / 10000; 
    double v2 = 4 * M_PI * a * a * b / 3000000; 

    printf("S1=%.6lf\n", s1);
    printf("V1=%.6lf\n", v1);
    printf("S2=%.6lf\n", s2);
    printf("V2=%.6lf\n", v2);

    return 0;
}
