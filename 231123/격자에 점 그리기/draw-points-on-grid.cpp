#include <iostream>
int arr[9][9];
int n,m;
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int idx = 1;
    cin >> n >> m;
    int x,y;
    for (int i=0; i<m; i++){
        cin >> x >> y;
        arr[x-1][y-1] = idx++;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}