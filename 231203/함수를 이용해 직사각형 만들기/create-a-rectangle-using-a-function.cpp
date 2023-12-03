#include <iostream>
void A(int x) {
    for (int i=0; i<x; i++){
        std::cout << '1';
    }
    std::cout << '\n';
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    std::cin >> n >> m;
    for (int i=0; i<n; i++) A(m);
    return 0;
}