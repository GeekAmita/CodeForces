#include<iostream>
#include<string>

int main() {
    int n, x = 0;
    std::cin >> n;
    for (auto i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        if (str.find("++") != std::string::npos) {
            x++;
        }
        else if (str.find("--") != std::string::npos) {
            x--;
        }
    }

    std::cout << x;
    return 0;
}