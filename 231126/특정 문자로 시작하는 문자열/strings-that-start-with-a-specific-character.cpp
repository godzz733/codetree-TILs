#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    int cnt = 0;
    int n;
    char t;
    string arr[20];
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> t;
    for (int i=0; i<n; i++){
        if (arr[i][0] == t){
            ans++;
            cnt += arr[i].length();
        }
    }
    cout << ans << " ";
    cout << fixed;
    cout.precision(2);
    cout << (float) cnt/ans;
    return 0;
}