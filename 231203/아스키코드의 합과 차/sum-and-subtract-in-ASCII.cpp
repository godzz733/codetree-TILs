#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char a,b;
    cin >> a >> b;
    cout << (int) a + (int) b << " ";
    if ((int) a < (int) b){
        cout << (int)b - (int)a;
    } else {
        cout << (int)a-(int)b;
    }
    return 0;
}