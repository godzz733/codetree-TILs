#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int n;
    int q,w,e;
    char z,x;
    cin >> a >> n;
    for (int i=0; i<n; i++){
        cin >> q;
        if (q == 1) {
            cin >> w >> e;
            char tem = a[e-1];
            a[e-1] = a[w-1];
            a[w-1] = tem;
        } else {
            cin >> z >> x;
            for (int i=0; i<a.length(); i++) {
                if (a[i] == z) {
                    a[i] = x;
                }
            }
        }
        cout << a << '\n';
    }
    return 0;
}