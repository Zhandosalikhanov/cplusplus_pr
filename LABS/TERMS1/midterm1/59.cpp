#include<iostream>
using namespace std;

bool isSorted(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    if(isSorted(a, n) == true)
    {
        cout << "Sorted";
    }else{
        cout << "Not sorted";
    }
}

bool isSorted(int a[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        return false;
    }
    return true;
}