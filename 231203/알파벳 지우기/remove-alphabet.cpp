#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    int ans = 0;
    string tem = "";
    for (char x:a){
        if (isdigit(x)) tem += x;
    }
    ans += stoi(tem);
    tem = "";
    for (char x:b){
        if (isdigit(x)) tem += x;
    }
    ans += stoi(tem);
    cout << ans;
    return 0;
}