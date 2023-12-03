#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    for (char x: a){
        if (isdigit(x) || isalpha(x)){
            if (isdigit(x))cout<<x;
            else cout << (char)tolower(x);
        }
    }
    return 0;
}