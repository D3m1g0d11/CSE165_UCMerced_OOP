#include <iostream>

int findBinary(int num){
    std::string b = "";
    while(num != 0){
        int r = num % 2;
        b = std::to_string(r) + b;
        num = num / 2;
    }
    return std::stoi(b);
}

int getBit(int num, int index){
    return num >> index & 1; //Shift number to the rigfht by index, AND it with 1
}

int setBit(int num, int index){
    return findBinary(num | 1 << index); //bitwise OR operator
}

int clearBit(int num, int index){
    return findBinary(num &~(1 << index)); //invert the bit string with the bitwise NOT operator (~), then AND it.
}

int main(){

    int n, index;
    std::cout << "ENTER A NUMBER: " << '\n';
    std::cin >> n;
    std::cout << "NUMBER IN BINARY IS " << findBinary(n) << '\n';

    std::cout << "ENTER AN INDEX TO GET, SET, and CLEAR BIT: " << '\n';
    std::cin >> index;

    std::cout << "GETTING BIT AT INDEX " << index << ": " << getBit(n, index) << '\n';
    std::cout << "SETTING BIT AT INDEX " << index << ": " << setBit(n, index) << '\n';
    std::cout << "CLARING BIT AT INDEX " << index << ": " << clearBit(n, index) << '\n';
    return EXIT_SUCCESS;
}