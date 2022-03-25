#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n, b, k;
    cin >> a >> n >> b >> k;
    string s = "00000000", d = s;
    for (int i = 0; i < 8; i++)
    {

        s[i] = char((a % 2) + 48);
        a /= 2;
    }
    for (int i = 0; i < 8; i++)
    {
        d[i] = char((b % 2) + 48);
        b /= 2;
    }
    if (s[n] == d[k])
    {
        cout << "Thunderclap and Flash!";
    }
    else
    {
        cout << "Thunder Breathing... First form...";
    }
}