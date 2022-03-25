#include<bits/stdc++.h>
using namespace std;

void wait(double sec)
{
    clock_t endwait;
    endwait = clock() + sec * CLK_TCK;
    while (clock() < endwait) {}
}

int main()
{
    cout << "Hi";
    wait(0.5);
    cout << "Bye";
    wait(1);
    cout << "!";
}