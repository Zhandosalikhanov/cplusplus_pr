#include <bits/stdc++.h>
using namespace std;

unsigned long long fac(unsigned long long n)
{
    if(n == 0)
    return 1;

    return n * fac(n - 1);
}
unsigned long long power(unsigned long long a, unsigned long long b)
{
    if(b == 0)
    return 1;

    return a * power(a, b - 1);
}

unsigned long long greatpower(unsigned long long n, unsigned long long a, unsigned long long b)
{
    unsigned long long sum = 0;
    
    for (unsigned long long i = 0; i <= n; i++)
    {
        sum += (fac(n) / (fac(i) * fac(n - i))) * power(a, n - i) * power(b, i);
    }
    return sum;
}

int main()
{   
    unsigned long long n, a, b;
    cout << "Enter one number n and two numbers a and b" << endl;
    cin >> n >> a >> b;
    cout << "(a + b) to the power of n would be " << endl << greatpower(n, a, b);
}