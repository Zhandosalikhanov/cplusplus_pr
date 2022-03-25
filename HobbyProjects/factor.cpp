#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long uns;

uns a, b;
double x;
double m;
uns gcd(uns a, uns b);

int num_aft_dot(double x)
{
    stringstream ss;
    string s;
    ss << x;
    ss >> s;
    return s.size() - s.find('.') - 1;
}

void conv(double x)
{
    
}

uns gcd(uns a, uns b)
{
    if(a % b == 0)
    return b;

    return gcd(b, a % b);
}

int main()
{
    
}