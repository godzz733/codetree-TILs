#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    while (a.length() != 1){
        int n;
        cin >> n;
        if (n >= a.length()) {
            cout << a.erase(a.length()-1,1);
            continue;
        }
        cout << a.erase(n,1) << '\n';
    }
    return 0;
}