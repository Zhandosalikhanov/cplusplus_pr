#include <iostream>
#include <cmath>
using namespace std;

/*Дано натуральное число. Выведите его последнюю цифру.*/

int main()
{
    int a;
    cin >> a;
    a = a % 10;
    cout << a;
    return 0;
}