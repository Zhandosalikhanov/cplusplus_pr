#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    a = a * c;
    if ((b * c) > 99){
        a = a + (b * c) / 100;
        b = (b * c) % 100;
    }else{
    b = b * c;}
    cout << a << " " << b;    
    return 0;
}