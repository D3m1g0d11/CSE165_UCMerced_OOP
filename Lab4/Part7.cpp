#include <iostream>

struct oneCharOneDouble{
    char c;
    double d;
};

struct twoCharsOneDouble{
    char c, c2;
    double d;
};

struct threeCharsOneDouble{
    char c, c2, c3;
    double d;
};

struct fourCharsOneDouble{
    char c, c2, c3, c4;
    double d;
};

struct empty{};

struct oneCharOneIntOneChar{
    char c;
    int i;
    char c2;
};

struct twoCharsOneInt{
    char c, c2;
    int i;
};

int main(){
    std::cout << sizeof(oneCharOneDouble) << '\n';
    std::cout << sizeof(twoCharsOneDouble) << '\n';
    std::cout << sizeof(threeCharsOneDouble) << '\n';
    std::cout << sizeof(fourCharsOneDouble) << '\n';
    std::cout << sizeof(empty) << '\n';
    std::cout << sizeof(oneCharOneIntOneChar) << '\n';
    std::cout << sizeof(twoCharsOneInt) << '\n';
    return EXIT_SUCCESS;
}