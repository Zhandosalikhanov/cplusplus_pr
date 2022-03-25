#include <bits/stdc++.h> 
using namespace std; 
  
bool isDigitPresent(int x, int d) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
  
        x = x / 10; 
    } 
  
    return (x > 0); 
} 
void printNumbers(int a, int b, int d) 
{ 
    for (int i = a; i <= b; i++) 
  
        if (i == d || isDigitPresent(i, d)) 
            cout << i << " "; 
} 
int main() 
{ 
    int a, b, d = 5; 
    cin >> a >> b;
    printNumbers(a, b, d); 
} 