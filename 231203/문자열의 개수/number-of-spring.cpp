#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string arr[200];
    string t;
    int x = 1;
    while (1){
        cin >> t;
        if (t == "0") break;
        if (x & 1) arr[x] = t;
        x++;
    }
    cout << x-1 << '\n';
    for (int i=1; i<x; i+= 2){
        cout << arr[i] << '\n';
    }
    return 0;
}