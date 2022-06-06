#include <iostream>
#include <cmath>
using namespace std;

/*
Дано целое число n. Выведите следующее за ним четное число. 
При решении этой задачи нельзя использовать условную инструкцию if и циклы.
*/

int main()
{
    int a, b;
    cin >> a;
    b = a % 2;
    cout << a + (2 - b);
    return 0;
}