#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int v, t;
    cin >> v >> t;
    if(v > 0)
    cout << (v * t) % 109;
    else
    cout << 109 + ((v * t) % 109);
}