#include<bits/stdc++.h>

int main() {
    double n, m, a, x, y;
    long long result;
    std::cin >> n >> m >> a;
    x = ceil(double(n / a));
    y = ceil(double(m / a));
    result = x * y;
    std::cout << result << std::endl;
    return 0;
}