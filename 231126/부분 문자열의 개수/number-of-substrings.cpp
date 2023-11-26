#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    int ans = 0;
    for (int i=0; i<a.length()-1;i++){
        if (a.substr(i,2) == b) ans++;
    }
    cout << ans;
    return 0;
}