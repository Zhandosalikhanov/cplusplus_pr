#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, target, index, count = 0;
    cin >> n >> target;
    int a[n];
    bool found = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == target){
            index = i + 1;
            found = true;
        }
    }
    if(found == true){
        cout << index;
    } else {
        for(int i = 0; i < n; i++){
            if(target > a[i]){
                count++;
            }
        }
        cout << count;
    }
    return 0;
}