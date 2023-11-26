#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    char q = a[0];
    char w = a[1];
    for (int i=0; i<a.length(); i++) {
        if (a[i] == q) a[i] = w;
        else if (a[i] == w) a[i] = q;
    }
    cout << a;
    return 0;
}