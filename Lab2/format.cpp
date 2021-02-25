#include <iostream>
#include <algorithm>

std::string findBinary(int num){
    std::string b = "";
    while(num != 0){
        int r = num % 2;
        b = std::to_string(r) + b;
        num = num / 2;
    }
    return b;
}


int main(){

    int num;
    std::cout << "Enter a number: " << '\n';
    std::cin >> num;
    while(true){
        if(num == -1){
            std::cout << "-1 inputted, ending program" << '\n';
            break;
        }
        std::cout << "NUMBER IN BINARY: " << findBinary(num) << '\n';
        std::cout << "NUMBER IN HEX: " << std::hex << num << '\n';
        std::cout << "Enter a number: " << '\n';
        std::cin >> num;
    }

    return EXIT_SUCCESS;
}