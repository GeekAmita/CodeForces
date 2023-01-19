#include<iostream>
#include<math.h>

int main() {
    for (auto i = 1; i <= 5; i++) {
        for (auto j = 1; j <= 5; j++) {
            int n;
            std::cin >> n;
            if (n == 1) {
                std::cout << (abs(3 - i) + abs(3 - j)) << std::endl;
                break;
            }
        }
    }
    return 0;
}