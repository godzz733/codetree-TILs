#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    cin >> tem;
    for (int i=tem.length()-1; i>=0; i--){
        if (i&1) cout<<tem[i];
    }
    return 0;
}