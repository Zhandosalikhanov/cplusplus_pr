#include <bits/stdc++.h>
using namespace std;

bool isInt(double x)
{
    return int(x) == x;
}

pair<int, int> qnt(double x, int i)
{
    if(isInt(x * i))
    return pair<int, int> (i, x * i);
}

int main()
{
    // cout << qnt(2, 2).first << " " << qnt(2, 2).second;
    stringstream ss;
    string s = "16";
    ss << s;
    int n;
    ss >> n;
    cout << n;
}