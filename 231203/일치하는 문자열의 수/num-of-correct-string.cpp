#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    string tem,b;
    cin >> a >> b;
    int ans = 0;
    for (int i=0; i<a; i++){
        cin >> tem;
        if (tem == b) ans++;
    }
    cout << ans;
    return 0;
}