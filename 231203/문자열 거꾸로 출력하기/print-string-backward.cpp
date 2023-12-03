#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    while (1){
        cin >> tem;
        if (tem == "END") break;
        reverse(tem.begin(),tem.end());
        cout << tem <<'\n';
    }
    return 0;
}