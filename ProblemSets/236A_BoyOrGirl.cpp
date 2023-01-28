#include<iostream>
#include<string>

int main() {
    std::string username;
    std::cin >> username;
    for (auto i = 0; i < username.length(); i++) {
        for (auto j = username.length() - 1; j > i; j--) {
            if (username[i] == username[j]) {
                username.erase(j, 1);
            }
        }
    }

    if (username.length() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}
