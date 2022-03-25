#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h, m, s, h2, m2, s2;
    cin >> h >> m >> s >> h2 >> m2 >> s2;
    s = h * 3600 + m * 60 + s;
    s2 = h2 * 3600 + m2 * 60 + s2;
    cout << s2 - s;
    return 0;
}