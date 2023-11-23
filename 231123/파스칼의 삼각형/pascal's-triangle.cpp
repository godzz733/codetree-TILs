#include <iostream>
using namespace std;
int n;
int arr[15][15];
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            if (i-1 >=0 && j - 1 >=0) {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            } else {
                arr[i][j] = 1;
            }
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}