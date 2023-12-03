#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    int a;
    cin >> a;
    for (char x: to_string(a)){
        ans += x-'0';
    }
    cout << ans;
    return 0;
}