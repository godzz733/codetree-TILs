#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    int a = 0;
    int n;
    string tem;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> tem;
        ans += tem.length();
        if (tem[0] == 'a') a++;
    }
    cout << ans << " " << a;
    return 0;
}