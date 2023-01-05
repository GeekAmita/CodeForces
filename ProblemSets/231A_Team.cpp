#include<iostream>

int main() {
    int n;
    int sol = 0;
    std::cin>>n;
    for(auto i = 0; i < n; i++) {
        int count = 0;
        for(auto j = 0; j < 3; j++) {
            int q;
            std::cin>>q;
            (q == 1) ? count++ : 0;
        }
        (count >= 2) ? sol++ : 0;
    }
    std::cout<<sol<<"\n";
    return 0;
}