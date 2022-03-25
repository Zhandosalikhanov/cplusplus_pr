#include<iostream>
using namespace std;

void printer(int l, int r);

int main()
{
    int l, r;
    cin >> l >> r;
    printer(l, r);
}

void printer(int l, int r)
{
    for (size_t i = l; i <= r; i++)
    {
        if(i % 2 == 0)
        cout << i << ' ';
    }
    
}