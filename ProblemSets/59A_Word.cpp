#include<bits/stdc++.h>

int main() {
    std::string s;
    int upper = 0, lower = 0;
    std::cin >> s;
    for (auto i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            lower++;
        }
    }
    if (lower >= upper) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (upper > lower) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    std::cout << s << std::endl;
    return 0;
}