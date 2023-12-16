#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int idx = 1;
    for (int i=1; i<n*n+1; i++){
        cout << idx << ' ';
        idx++;
        if (idx == 10) {
            idx = 1;
        }
        if (!(i%n)) cout << '\n';
    }
    return 0;
}