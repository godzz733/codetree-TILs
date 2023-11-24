#include <iostream>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    char alp;
    int ans=0;
    getline(cin,tem);
    cin >> alp;
    for (char a:tem){
        if (a == alp){
            ans++;
        }
    }
    cout << ans;
    return 0;
}