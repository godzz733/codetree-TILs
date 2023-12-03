#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,c;
    cin >> a >> c;
    int l = a.length();
    for (int i=0; i<c.length(); i++){
        if (c[i] == 'L'){
            a = a.substr(1,l) + a.substr(0,1);
        } else {
            a = a.substr(l-1,l) + a.substr(0,l-1);
        }
    }
    cout << a;
    return 0;
}