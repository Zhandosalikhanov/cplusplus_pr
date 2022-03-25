#include <bits/stdc++.h>
using namespace std;

unsigned long long power(int i, int j)
{
    if(j == 0)
    return 1;

    return i * power(i, --j);
}

int i = -1;
long long my_pow()
{
    i++;
    unsigned long long l = power(i, i);
    
    return l;
}

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    generate(v.begin(), v.end(), my_pow);

    vector<long long> :: iterator it = v.begin();
    for (; it != v.end(); it++)
    {
        cout << *it << " ";
    }
    
}