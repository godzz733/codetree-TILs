#include <iostream>

using namespace std;
int arr[100][100];
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int idx = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j]) continue;
            int dx = i;
            int dy = j;
            while (dx>=0 && dx<n && dy>=0 && dy<m){
                arr[dx][dy] = idx;
                idx++;
                dx++;
                dy--;
            }
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