#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0;
    int b = 0;
    string t;
    cin >> t;
    for (int i=0; i<t.length()-1; i++){
        if (t.substr(i,2) == "ee") a++;
        if (t.substr(i,2) == "eb") b++;
    }
    cout << a << " " << b;
    return 0;
}