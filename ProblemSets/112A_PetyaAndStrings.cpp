#include<bits/stdc++.h>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if (str1.compare(str2) < 0) {
        std::cout << -1 << std::endl;
    }
    else if (str1.compare(str2) > 0) {
        std::cout << 1 << std::endl;
    }
    else {
        std::cout << 0 << std::endl;
    }

    return 0;
}