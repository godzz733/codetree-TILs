#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,t1,t2;
    cin >> t1 >> t2;
    a += t1 + t2;
    b += t2 + t1;
    if (a == b) cout << "true";
    else cout << "false";
    return 0;
}