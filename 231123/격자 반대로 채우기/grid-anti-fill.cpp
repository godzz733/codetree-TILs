#include <iostream>

using namespace std;
int arr[10][10];
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int idx = 1;
    int key;
    key = n%2 ? 1:0;
    for (int i=n-1; i>=0; i--){
        for (int j=n-1; j>=0; j--){
            if ((i+key)%2){
                arr[j][i] = idx;
            } else {
                arr[n-j-1][i] = idx;
            }
            idx++;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}