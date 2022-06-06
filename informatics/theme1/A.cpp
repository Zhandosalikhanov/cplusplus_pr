#include <iostream>
#include <cmath>
using namespace std;

/*Дано два числа a и b. Найдите гипотенузу треугольника с заданными катетами.*/

int main()
{
	double a, b;
    cin >> a >> b;
    cout << hypot(a, b);
    return 0;
}