#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }
    char t;
    int key = 0;
    cin >> t;
    for (int i=0; i<10; i++){
        if (arr[i][arr[i].length()-1] == t){
        cout << arr[i] << '\n';
        t++;
        }   
    }
    if (!t) cout << "None";
    return 0;
}