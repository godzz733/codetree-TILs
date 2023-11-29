#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    while (a.find(b) != string::npos) {
        int idx = a.find(b);
        a.erase(idx, b.length());
    }
    cout << a;
    return 0;
}