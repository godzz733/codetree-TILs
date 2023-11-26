#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    int n;
    cin >> tem >> n;
    int idx = tem.length() < n ? 0 : tem.length() - n;
    for (int i=tem.length()-1; i>=idx; i--){
        cout << tem[i];
    }
    return 0;
}