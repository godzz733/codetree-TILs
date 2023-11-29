#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    for (int i=0; i<100; i++){
        for (int j=0; j<a.length()-b.length(); j++){
            if (a.substr(j,b.length()) == b) {
                a.erase(j,b.length());
                break;
            }
        }
    }
    cout << a;
    return 0;
}