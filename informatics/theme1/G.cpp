#include <iostream>
#include <cmath>
using namespace std;

/*Дано двузначное число. Найдите число десятков в нем.*/

int main()
{
    int a;
    cin >> a;
    a = a / 10;
    cout << a;
    return 0;
}