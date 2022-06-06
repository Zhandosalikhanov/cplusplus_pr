#include <iostream>
#include <cmath>
using namespace std;

/*Дано трехзначное число. Найдите сумму его цифр.*/

int main()
{
    int a, b, c, d;
    cin >> a;
    b = a / 100;
    c = a % 10;
    d = (a % 100) / 10;
    cout << b + c + d;
    return 0;
}