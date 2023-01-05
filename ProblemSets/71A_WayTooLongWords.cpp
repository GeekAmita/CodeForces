#include<iostream>
#include<string>
#include<vector>

int main() {
    int n;
    std::cin>>n;
    std::vector<std::string> input;

    for(auto i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        input.push_back(str);
    }

    for (auto i = 0; i < n; i++) {  
        if(input[i].length() > 10){
            std::cout<<input[i].front()<<input[i].length()-2<<input[i].back()<<std::endl;
        }    
        else{
            std::cout<<input[i]<<std::endl;
        }
    }
    return 0;
    
}