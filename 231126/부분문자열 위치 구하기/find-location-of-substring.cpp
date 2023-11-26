#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int ans = -1;
    string a,b;
    cin >> a >> b;
    if (a.find(b) != string::npos) ans = a.find(b);
    cout << ans;
    return 0;
}