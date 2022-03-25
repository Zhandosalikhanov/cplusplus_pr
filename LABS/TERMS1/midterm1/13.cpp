#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        return 0;
    }
    return 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    if(isPrime(n) == 1 && k % 2 == 0 && n <= 500)
    {
        cout << "Good job!";
    }else{
        cout << "Try next time!";
    }
}