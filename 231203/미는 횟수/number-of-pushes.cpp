#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    int ans = 0;
    while (a != b && ans < 101){
        ans+= 1;
        a = a.substr(a.length()-1,a.length()) + a.substr(0,a.length()-1);
    }
    if (ans <= 100) cout << ans;
    else cout << -1;
    return 0;
}