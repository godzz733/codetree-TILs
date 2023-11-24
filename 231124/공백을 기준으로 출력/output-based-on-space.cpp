#include <iostream>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for (char x : a){
        if (x != ' ') cout << x;
    }
    for (char x : b){
        if (x != ' ') cout << x;
    }
    
    return 0;
}