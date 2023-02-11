#include<iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    for (auto i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n = n / 10;
        }
        else {
            n--;
        }
    }
    std::cout << n << std::endl;
    return 0;
}