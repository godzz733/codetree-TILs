#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem,t,ans;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> t;
        tem += t;
    }
    for (int i=0; i<tem.length(); i++){
        if (!(i%5) && i){
            ans += '\n';
            ans += tem[i];
        } else {
            ans += tem[i];
        }
    }
    cout << ans;
    return 0;
}