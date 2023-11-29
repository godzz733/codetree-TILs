#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    cout << a.erase(a.find('e'),1);
    return 0;
}