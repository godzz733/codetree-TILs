#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    string tem="";
    cin >> a >> b;
    int ans = 0;
    for (char x: a){
        if (!isdigit(x)){
            ans += stoi(tem);
            tem = "";
            break;
        } else {
            tem += x;
        }
    }
    if (tem != ""){
        ans += stoi(tem);
        tem = "";
    }
    for (char x: b){
        if (!isdigit(x)){
            ans += stoi(tem);
            tem = "";
            break;
        } else {
            tem += x;
        }
    }
    if (tem != ""){
        ans += stoi(tem);
        tem = "";
    }
    cout << ans;
    return 0;
}