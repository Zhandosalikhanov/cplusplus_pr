#include <iostream>
#include <cmath>
using namespace std;

/*
Даны два натуральных числа n и m. Если одно из них делится на другое нацело, выведите 1, иначе выведите любое другое целое число.

При решении этой задачи нельзя пользоваться условной инструкцией if и циклами.
*/

int main()
{
    int a, b, c, d;
    cin >> a >> b;
    c = a % b;
    d = b % a;
    cout << c * d + 1;
    return 0;
}