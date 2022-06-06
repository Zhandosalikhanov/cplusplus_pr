#include <iostream>
#include <cmath>
using namespace std;

/*
Пирожок в столовой стоит a рублей и b копеек. 
Определите, сколько рублей и копеек нужно заплатить за c пирожков.
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    a = a * c;
    a += (b * c) / 100;
    b = (b * c) % 100;
    cout << a << " " << b;    
    return 0;
}