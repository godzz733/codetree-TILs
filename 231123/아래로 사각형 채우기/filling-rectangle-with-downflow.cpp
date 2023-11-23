#include <iostream>

using namespace std;
int n;
int arr[10][10];
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int idx = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arr[j][i] = idx;
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