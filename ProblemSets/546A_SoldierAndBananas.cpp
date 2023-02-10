#include<iostream>

int main() {
    int k, n, w, total = 0;
    std::cin >> k >> n >> w;
    for (auto i = 1; i <= w; i++) {
        total = total + (i * k);
    }
    if (total <= n) {
        std::cout << 0 << std::endl;
    }
    else {
        std::cout << total - n << std::endl;
    }
    return 0;
}