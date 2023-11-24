#include <iostream>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    string tem;
    cin >> tem;
    ans += tem.length();
    cin >> tem;
    ans += tem.length();
    cout << ans;
    return 0;
}