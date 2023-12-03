#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    for (char x: a){
        if (isalpha(x)){
            cout<< (char) toupper(x);
        }
    }
    return 0;
}