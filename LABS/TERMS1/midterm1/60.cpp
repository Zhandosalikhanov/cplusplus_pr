#include<iostream>
using namespace std;

int IsPerfectNumber();

int main()
{
    cout << IsPerfectNumber();
}

int IsPerfectNumber()
{
    int x;
    cin >> x;
    if(x % 3 != 0)
    return 0;

    return 1 + IsPerfectNumber();
}
