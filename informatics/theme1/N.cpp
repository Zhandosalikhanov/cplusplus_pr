#include <iostream>
#include <cmath>
using namespace std;

/*
В некоторой школе занятия начинаются в 9:00. 
Продолжительность урока — 45 минут, после 1-го, 3-го, 5-го и т.д. уроков перемена 5 минут, а после 2-го, 4-го, 6-го и т.д. — 15 минут. 
Определите, когда заканчивается указанный урок.
*/

int main()
{
    int a, n, h, m, rem;
    cin >> n;
    rem = n % 2;
    a = n - n / 2;
    h = 9 + (((n/2) * 60 + a * 50) - 15 + (10 * rem)) / 60;
    m = (((n/2) * 60 + a * 50) - 15 + (10 * rem)) % 60;
    cout << h << " " << m;
    return 0;
}