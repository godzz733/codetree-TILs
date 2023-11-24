#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cmax = 0;
    int cmin = 30;
    string tem;
    for (int i=0; i<3; i++){
        cin >> tem;
        int len = tem.length();
        if (cmax < len) cmax = len;
        if (cmin > len) cmin = len;
    }
    cout << cmax - cmin;
    return 0;
}