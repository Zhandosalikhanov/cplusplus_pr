#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int s, m, h;
    cin >> s;
    m = s / 60;
    s = s % 60;
    h = m / 60;
    m = m % 60;
    h = h % 24;
    if (m < 10){
        if (s < 10){
            cout << h << ":0" << m << ":0" << s;
        }else{
        cout << h << ":0" << m << ":" << s;}
    }else if (s < 10){
    cout << h << ":" << m << ":0" << s;
    }else{
        cout << h << ":" << m << ":" << s;
    }
    return 0;
}