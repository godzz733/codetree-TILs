#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    int tem,n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> tem;
        ans += tem;
    }
    string q = to_string(ans);
    string an = q.substr(1,q.length()) + q.substr(0,1);
    cout << an;
    return 0;
}