#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int ans = 0;
    int an = 0;
    cin >> a >> b;
    ans = a + b;
    for (char x: to_string(ans)){
        if (x=='1') an++;
    }
    cout << an;
    return 0;
}