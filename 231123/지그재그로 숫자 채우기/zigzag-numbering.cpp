#include <iostream>
using namespace std;
int arr[100][100];
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int idx = 0;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (i%2) {
                arr[n-j-1][i] = idx;
            } else {
                arr[j][i] = idx;
            }
            idx++;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}