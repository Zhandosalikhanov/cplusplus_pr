#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1 || n % 2 == 0 && n >= 6 && n <= 20)
    {
        cout << "Super";
    }
    else
    {
        cout << "Not Super";
    }

    return 0;
}