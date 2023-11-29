#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int n,m;
    cin >> a >> n;
    int len = a.length();
    for (int i=0; i<n; i++){
        cin >> m;
        if (m == 2){
            a = a.substr(len-1,len) + a.substr(0,len-1);
        } else if (m == 1){
            a = a.substr(1,len) + a.substr(0,1);
        } else {
            reverse(a.begin(),a.end());
        }
        cout << a << '\n';
    }
    return 0;
}