#include<iostream>

int main() {
    int n, k, r, count = 0;
    std::cin>>n>>k;
    int arr[n];
    for(auto i = 0; i < n; i++) {
        std::cin>>arr[i];
    }
    r = arr[k-1];
    for(auto i = 0; i < n; i++) {
        if(arr[i]>=r&&arr[i]>0) {
            count++;
        }
    }
    std::cout<<count<<std::endl;

    return 0;
}