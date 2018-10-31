//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() {

     double a, b, c, X1, D;
    cin >> a >> b >> c;
     D = b*b - 4*a*c;
    if (D > 0)
    {
        X1 = (-b - sqrt(D)) / (2 * a);
        double X2 = (-b + sqrt(D)) / (2 * a);
        if (X1 < X2) cout << X1 << " " << X2;
        else cout << X2 << " "  << X1;
    }
    else if (D == 0)
    {
        if (b ==  0) cout << 0;
        else
            {
            X1 = -b / (2 * a);
            cout << X1;
            }
    };
 };
