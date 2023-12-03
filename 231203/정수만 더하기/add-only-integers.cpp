#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    int ans=0;
    for (char x: a){
        if (isdigit(x)) ans += x-'0';
    }
    cout << ans;
    return 0;
}