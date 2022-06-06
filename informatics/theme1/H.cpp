#include <iostream>
#include <cmath>
using namespace std;

/*Дано неотрицательное целое число. Найдите число десятков в его десятичной записи (то есть вторую справа цифру его десятичной записи).*/

int main()
{
    int a;
    cin >> a;
    a = a % 100;
    a = a / 10;
    cout << a;
    return 0;
}