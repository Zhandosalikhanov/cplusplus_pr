#include <iostream>
#include <cmath>
using namespace std;

/*
За день машина проезжает n километров. Сколько дней нужно, чтобы проехать маршрут длиной m километров?

При решении этой задачи нельзя пользоваться условной инструкцией if и циклами.
*/

int main()
{
    int v, s, r, t, o;
    cin >> v >> s;
    r = s % v;
    t = s / v;
    o = r - 1;
    cout << t + r / (r + 1 - (r - abs(o))); 
    return 0;
}