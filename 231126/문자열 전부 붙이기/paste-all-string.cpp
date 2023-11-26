#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string ans;
    string t;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> t;
        ans.append(t);
    }
    cout << ans;
    return 0;
}