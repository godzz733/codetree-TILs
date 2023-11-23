#include <iostream>

using namespace std;
int arr[5][5];
int main() {
    // 여기에 코드를 작성해주세요.
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (i && j){
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            } else {
                arr[i][j] = 1;
            }
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}