#include <iostream>
#include <cmath>
using namespace std;

/*
N школьников делят K яблок поровну, неделящийся остаток остается в корзинке. 
Сколько яблок достанется каждому школьнику?
*/

int main()
{
	int N, K, c;
    cin >> N >> K;
    c = K / N;
    cout << c;
    return 0;
}