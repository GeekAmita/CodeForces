#include<iostream>
#include<string>

int main() {
    std::string str;
    std::cin >> str;
    int count = 1;
    for (auto i = 0; i < str.length(); i++) {
        if (count == 7) {
            break;
        }
        else if (str[i] == str[i + 1]) {
            count++;
        }
        else if (str[i] != str[i + 1]) {
            count = 1;
        }
    }
    if (count == 7) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}