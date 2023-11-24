#include <iostream>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    getline(cin, tem);
    for (int i=2; i<10; i++){
        cout << tem[i];
    }
    return 0;
}