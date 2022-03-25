#include <bits/stdc++.h>

using namespace std;

double pifagor(double n, double m)
{
    double d;
    return d = sqrt(n * n + m * m);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout.precision(4);
    cout << pifagor(n, m) << endl;
    return 0;
}