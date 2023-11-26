#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    string ans = "";
    int len = 0;
    cin >> tem;
    char a = tem[0];
    int q = 1;
    for (int i=1; i<tem.length(); i++){
        if (tem[i] != a){
            ans += a;
            ans += to_string(q);
            q = 1;
            a = tem[i];
        } else {
            q++;
        }
    }
    ans += a;
    ans += to_string(q);
    cout << ans.length() << '\n' << ans;
    return 0;
}