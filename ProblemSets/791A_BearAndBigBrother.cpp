#include<iostream>

int main() {
    int a, b, count = 0;
    std::cin >> a >> b;
    while (a <= b) {
        count++;
        b = 2 * b;
        a = 3 * a;
    }
    std::cout << count << std::endl;
    return 0;
}