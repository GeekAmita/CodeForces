#include<iostream>
#include<string>

int main() {
    std::string str;
    std::cin >> str;
    for (auto i = 0; i < str.length(); i = i + 2) {
        for (auto j = 0; j < str.length() - i - 1; j = j + 2) {
            if (str[j] > str[j + 2]) {
                auto temp = str[j];
                str[j] = str[j + 2];
                str[j + 2] = temp;
            }
        }
    }
    std::cout << str << std::endl;
    return 0;
}