#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    std::cin >> a;
    if (a=='z'){
        std::cout << 'a';
        return 0;
    }
    std::cout << (char) ((int)a + 1);
    return 0;
}