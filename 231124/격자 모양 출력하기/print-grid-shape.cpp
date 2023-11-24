#include <iostream>

using namespace std;
int arr[10][10];
int n,m;
int x,y;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i=0; i<m; i++){
        cin >> x >> y;
        arr[x-1][y-1] = x * y;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}