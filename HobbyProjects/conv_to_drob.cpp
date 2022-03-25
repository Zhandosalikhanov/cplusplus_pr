#include<bits/stdc++.h>
using namespace std;

bool isInt(double x)
{
    return abs(x - int(x)) <= 0.00011;
}

pair< int, int > converter(double x)
{
    int i = 2;
    while(!isInt(x * i))
        i++;

    return pair< int, int > (int(i * x), i);
}

int main()
{
    double x;
    cin >> x;
    cout << converter(x).first << '/' << converter(x).second;
}