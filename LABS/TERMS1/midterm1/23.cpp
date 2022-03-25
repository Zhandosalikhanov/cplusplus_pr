#include <bits/stdc++.h>
using namespace std;

string f(double a, double b, double i)
{
    if(i > 60)
    {return "NO";}

    if(pow(2, i) == b / a)
    return "YES";

    return f(a, b, ++i);
}

double f1(double a, double b, double i)
{

    if(pow(2, i) == b / a)
    return i;

    return f1(a, b, ++i);
}


int main()
{
    double a, b, i = -60;
    cin >> a >> b;
    if(f(a, b, i) == "NO")
    {
        cout << f(a, b, i);
    }else{
        cout << f(a, b, i) << " " << f1(a, b, i);
    }
}