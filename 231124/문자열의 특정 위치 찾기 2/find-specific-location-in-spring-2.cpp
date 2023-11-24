#include <iostream>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    int ans = 0;
    cin >> a;
    for (string x: arr){
        if (x[2] == a || x[3] == a) {
            cout << x << '\n';
            ans++;
        }
    }
    cout << ans;
    return 0;
}