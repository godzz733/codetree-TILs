#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string tem;
    string ans;
    char arr[1000];
    int arr2[1000];
    int len = 0;
    cin >> tem;
    char a = tem[0];
    int q = 1;
    for (int i=1; i<tem.length(); i++){
        if (tem[i] != a){
            arr2[len] = q;
            arr[len++] = a;
            q = 1;
            a = tem[i];
        } else {
            q++;
        }
    }
    arr2[len] = q;
    arr[len++] = a;
    cout << (len<<1) << '\n';
    for (int i=0; i<len; i++){
        cout << arr[i] << arr2[i];
    }
    return 0;
}