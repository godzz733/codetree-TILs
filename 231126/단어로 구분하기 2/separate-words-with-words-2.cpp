#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    for (int i=0; i<10; i++){
        cin >> tem;
        if ((i+1)&1) cout << tem << '\n';
    }
    return 0;
}