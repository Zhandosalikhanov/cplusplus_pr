#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, h;
    cin >> m;
    if (m < 1440){
        h = m / 60;
        m = m % 60;
    }else{
        while (m >= 1440)
        {
            m = m -1440;
        }
        h = m / 60;
        m = m % 60;
    }
    cout << h << " " << m;;
    return 0;
}